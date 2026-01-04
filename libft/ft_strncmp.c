/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:16:01 by jmin              #+#    #+#             */
/*   Updated: 2026/01/03 19:00:15 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((int)s1[i] - (int)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(){
// 	const char *s1 = "abc";
// 	const char *s2 = "abd";
// 	size_t n = 2;

// 	printf("1번: %s\n2번: %s\n",s1 ,s2);
// 	printf("return: %d", ft_strncmp(s1, s2, n));
// 	return 0;
// }