/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:17:28 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:18:21 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main(){
// 	char str[] = "123";
// 	int subs = '0';
// 	size_t n = 1;
// 	printf("변환전: %s\n", str);
// 	printf("변환후: %s\n", (char *)ft_memset(str, subs, n));
// 	printf("변환후: %s", (char *)memset(str, subs, n));
// 	return 0;
// }