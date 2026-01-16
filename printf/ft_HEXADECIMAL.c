/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_HEXADECIMAL.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:41:08 by jmin              #+#    #+#             */
/*   Updated: 2026/01/16 13:29:55 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int ft_HEXADECIMAL(unsigned int n)
{
	int len;

	len = 0;
	if (n >= 16)
		len += ft_HEXADECIMAL(n / 16);
	len += write(1, &"0123456789ABCDEF"[n % 16], 1);
	return (len);
}

// #include <stdio.h>

// int main(){
// 	printf("\n%d", ft_HEXADECIMAL(30));
// 	return 0;
// }