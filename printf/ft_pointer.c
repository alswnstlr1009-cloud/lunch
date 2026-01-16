/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:36:37 by jmin              #+#    #+#             */
/*   Updated: 2026/01/16 20:36:12 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ptonbr(unsigned long n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ptonbr(n / 16);
	len += write(1, &"0123456789abcdef"[n % 16], 1);
	return (len);
}

int	ft_pointer(void *p)
{
	unsigned long long	n;

	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	n = (unsigned long long)p;
	write(1, "0x", 2);
	return (ptonbr(n) + 2);
}

// int main()
// {
// 	char *a = "1242";

// 	ft_pointer(a);
// 	return 0;
// }