/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:08:49 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:12:24 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// #include<stdio.h>
// int main()
// {
// 	char dst[] = "1234";
// 	const char src[] = "abcd";
// 	size_t size = 1;

// 	printf("before : %s\n" ,dst);
// 	ft_strlcpy(dst, src, size);
// 	printf("after : %s\n", dst);
// 	printf("return : %zu", ft_strlcpy(dst,src,size));

// 	return 0;
// }