/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 13:47:54 by jmin              #+#    #+#             */
/*   Updated: 2026/01/03 21:28:21 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = 0;
	while (s[len] != '\0')
		len++;
	if ((char)c == '\0')
		return ((char *)&s[len]);
	i = len - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(){
// 	const char *str = "1234";
// 	int chr = '3';

// 	printf("str: %s\nchr: %c\n", str, chr);
// 	printf("return: %s", ft_strrchr(str, chr));
// 	return 0;
// }

// char *ft_strrchr(const char *s, int c)
// {
// 	const char *last;

// 	last = NULL;
// 	while (1)
// 	{
// 		if (*s == (char)c)
// 			last = s;
// 		if (*s == '\0')
// 			break;
// 		s++;
// 	}
// 	return ((char *)last);
// }