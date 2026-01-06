/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:20:30 by jmin              #+#    #+#             */
/*   Updated: 2026/01/05 15:05:02 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int main(){
// 	char str[] = "123";
// 	size_t n = 2;
// 	printf("변경 전: %c, %c, %c\n", str[0], str[1], str[2]);
// 	ft_bzero(str, n);
// 	printf("변경 후: %c, %c, %c", str[0], str[1], str[2]);
// 	return 0;
// }