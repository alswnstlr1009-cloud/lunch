/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:53:59 by jmin              #+#    #+#             */
/*   Updated: 2026/01/03 16:05:55 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*ptr;

	i = 0;
	str = (unsigned char *)dest;
	ptr = (const unsigned char *)src;
	if ((dest > src) && (dest < src + n))
	{
		while (i < n)
		{
			str[n - i - 1] = ptr[n - i - 1];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			str[i] = ptr[i];
			i++;
		}
	}
	return (dest);
}

// #include<stdio.h>

// int main(){
// 	char src[] = "abcde";
// 	char dest[] = "12345";

// 	printf("변환전 : %s\n", dest);
// 	memmove(dest, src, sizeof(char) *1);
// 	printf("변환후 : %s\n", dest);
// 	return 0;
// }