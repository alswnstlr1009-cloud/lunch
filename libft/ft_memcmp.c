/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:11:24 by jmin              #+#    #+#             */
/*   Updated: 2026/01/03 20:11:09 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return ((int)p1[i] - (int)p2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(){
// 	size_t				n = 3;
// 	const unsigned char	*p1 = (const unsigned char *)"abc";
// 	const unsigned char	*p2 = (const unsigned char *)"abd";

// 	printf("p1: %s\np2: %s\n",p1, p2);
// 	printf("return: %d", ft_memcmp(p1,p2,n));
// 	return 0;
// }