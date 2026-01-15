/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:21:00 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:12:20 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	len_d = 0;
	while ((len_d < size) && (dst[len_d] != '\0'))
		len_d++;
	i = 0;
	if (size > len_d)
	{
		while ((i + len_d < size - 1) && (src[i] != '\0'))
		{
			dst[len_d + i] = src[i];
			i++;
		}
		dst[len_d + i] = '\0';
	}
	len_s = 0;
	while (src[len_s] != '\0')
		len_s ++;
	return (len_d + len_s);
}

// #include <stdio.h>
// int main()
// {
// 	char dst[] = "hello";
// 	const char src[] = "world";
// 	size_t size = 6;
// 	size_t ret = ft_strlcat(dst, src, size);

// 	printf("after : %s\n", dst);
// 	printf("return : %zu\n", ret);

// 	return 0;
// }
// 일부라도 복사가 되면 => dest+src 정해진값을 뱉고
// 아예 복사가 안되면 => size+src  잘못된값을 뱉고