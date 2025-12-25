/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:11:02 by jmin              #+#    #+#             */
/*   Updated: 2025/12/23 20:03:50 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strdup(const char *s)
{
	unsigned int mem;
	unsigned char *ret;

	mem = 0;
	while(s[mem] != '\0')
		mem++;
	ret = malloc(mem);
	

}