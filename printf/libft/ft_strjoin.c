/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:13:09 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:12:16 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	size_t	i;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	ret = (char *)malloc(sizeof(char) * len_1 + len_2 + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < len_1)
	{
		ret[i] = s1[i];
		i++;
	}
	while (i < len_1 + len_2)
	{
		ret[i] = s2[i - len_1];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

// #include <stdio.h>
// #include <string.h>
// int main(){
// 	char const *s1 = "abc";
// 	char const *s2 = "def";
// 	char *run = ft_strjoin(s1, s2);
// 	printf("return : %s\n length : %zu", run, strlen(run));
// 	free(run);
// 	return 0;
// }