/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:00:20 by jmin              #+#    #+#             */
/*   Updated: 2025/12/22 16:11:12 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	const unsigned char *p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((const unsigned char)p[i] == (unsigned char)c)
			return (void *)&p[i];
		i++;
	}
	return NULL;
}
