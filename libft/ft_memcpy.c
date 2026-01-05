/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:45:29 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:11:07 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*ptr;

	i = 0;
	str = (unsigned char *)dest;
	ptr = (const unsigned char *)src;
	while (i < n)
	{
		str[i] = ptr[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int main(){
// 	char dest[] = "123";
// 	char src[] = "abc";
// 	size_t n = 2;
// 	printf("변경 전: %s\n", dest);
// 	ft_memcpy(dest, src, n);
// 	printf("변경 후: %s", dest);
// 	return 0;
// }