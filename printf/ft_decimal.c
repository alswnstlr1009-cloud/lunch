/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:39:18 by jmin              #+#    #+#             */
/*   Updated: 2026/01/16 20:36:13 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_decimal(int i)
{
	int	len_i;

	len_i = 0;
	ft_putnbr_fd(i, 1);
	if (i <= 0)
	{
		i *= -1;
		len_i += 1;
	}
	while (i != 0)
	{
		i /= 10;
		len_i++;
	}
	return (len_i);
}
