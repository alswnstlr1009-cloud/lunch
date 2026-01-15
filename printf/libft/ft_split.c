/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 17:21:26 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:11:57 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && (*s != c))
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*copy_word(const char *s, char c)
{
	char	*word;
	size_t	i;
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = -1;
	while (++i < len)
		word[i] = s[i];
	word[len] = '\0';
	return (word);
}

static void	*free_all(char **ret, size_t j)
{
	while (j > 0)
		free (ret[--j]);
	free (ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**ret;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ret = (char **)malloc((words + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		ret[i] = copy_word(s, c);
		if (!ret[i])
			return (free_all(ret, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	ret[i] = NULL;
	return (ret);
}

// #include <stdio.h>

// int main(){
// 	char const *s = "a b";
// 	char c = ' ';
// 	char **ret;

// 	ret = ft_split(s,c);
// 	printf("0 : %s\n", ret[0]);
// 	printf("1 : %s\n", ret[1]);
// 	printf("2 : %s\n", ret[2]);
// 	printf("3 : %s\n", ret[3]);
// 	printf("4 : %s\n", ret[4]);
// 	return 0;
// }