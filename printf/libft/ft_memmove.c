/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:53:59 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:40:21 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*str;
	const unsigned char	*ptr;

	if (src == NULL && dest == NULL)
		return (NULL);
	str = (unsigned char *)dest;
	ptr = (const unsigned char *)src;
	if ((dest > src) && (dest < src + n))
	{
		while (n--)
			str[n] = ptr[n];
	}
	else
	{
		while (n--)
			*str++ = *ptr++;
	}
	return (dest);
}

// #include<stdio.h>
// #include <string.h>

// int main(){
// 	char src[] = "abcde";
// 	char dest[] = "12345";
// 	char src2[] = "abcde";
// 	char dest2[] = "12345";

// 	printf("변환전 : %s\n", dest);
// 	memmove(dest, src, sizeof(char) *1);
// 	printf("변환후 : %s\n", dest);
// 	printf("변환전 : %s\n", dest2);
// 	memmove(dest2, src2, sizeof(char) *1);
// 	printf("변환후 : %s\n", dest2);	
// 	return 0;
// }