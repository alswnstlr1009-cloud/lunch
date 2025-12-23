/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 13:47:54 by jmin              #+#    #+#             */
/*   Updated: 2025/12/23 15:18:50 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
		len++;
	if ((char)c == '\0')
		return (char *)&s[len];
	i = len-1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return NULL;
}