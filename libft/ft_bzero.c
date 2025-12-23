/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:20:30 by jmin              #+#    #+#             */
/*   Updated: 2025/12/17 20:45:10 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ptr;

	ptr = (unsigned char)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}