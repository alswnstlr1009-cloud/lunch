/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:08:49 by jmin              #+#    #+#             */
/*   Updated: 2025/12/18 16:20:45 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	while((i < size-1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	
	len = 0;
	while(src[len] != '\0')
		len++;
	
	return(len);
}

// #include<stdio.h>
// int main()
// {
// 	char dst[] = "1234";
// 	const char src[] = "abcd";
// 	size_t size = 3;

// 	printf("before : %s\n" ,dst);
// 	ft_strlcpy(dst, src, size);
// 	printf("after : %s\n", dst);
// 	printf("%zu", ft_strlcpy(dst,src,size));

// 	return 0;
// }