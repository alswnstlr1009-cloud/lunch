/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphexadecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:41:08 by jmin              #+#    #+#             */
/*   Updated: 2026/01/16 20:36:06 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_uphexadecimal(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_uphexadecimal(n / 16);
	len += write(1, &"0123456789ABCDEF"[n % 16], 1);
	return (len);
}

// #include <stdio.h>

// int main(){
// 	printf("\n%d", ft_uphexadecimal(30));
// 	return 0;
// }