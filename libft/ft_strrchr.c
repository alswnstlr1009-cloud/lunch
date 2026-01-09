/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 13:47:54 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:47:10 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// #include <string.h>

// int main(){
// 	const char *str = "1234";
// 	int chr = '3';

// 	printf("str: %s\nchr: %c\n", str, chr);
// 	printf("return: %s\n", ft_strrchr(str, chr));
// 	printf("return: %s", strrchr(str, chr));
// 	return 0;
// }
