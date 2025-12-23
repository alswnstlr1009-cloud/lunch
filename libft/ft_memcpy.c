/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:45:29 by jmin              #+#    #+#             */
/*   Updated: 2025/12/18 15:49:22 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *str;
	const unsigned char *ptr;

	i = 0;
	str = (unsigned char*)dest;
	ptr = (const unsigned char*)src;
	while (i < n)
	{
		str[i] = ptr[i];
		i++;
	}
	return (dest);
}