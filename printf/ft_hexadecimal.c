/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 20:58:19 by jmin              #+#    #+#             */
/*   Updated: 2026/01/16 12:14:25 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int ft_hexadecimal(unsigned int n)
{
	int len;

	len = 0;
	if (n >= 16)
		len += ft_hexadecimal(n / 16);
	len += write(1, &"0123456789abcdef"[n % 16], 1);
	return (len);
}

#include <stdio.h>
#include <unistd.h>


int main(){
	printf("%s", (char *)NULL);
	// write(1, &"%", 1);
	return 0;
}
