/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:00:20 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:50:15 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include <string.h>
// int main() {
//     char *str = "abc";
//     void *ptr = ft_memchr(str, 'b', 3); // 'b'를 3바이트 안에서 찾음

//     if (ptr)
//         printf("찾은 문자 이후: %s\n", (char *)ptr);
//     else
//         printf("문자를 찾지 못했습니다.\n");
//     return 0;
// }