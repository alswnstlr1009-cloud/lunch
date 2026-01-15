/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:42:20 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:11:41 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a;
	long	nbr;

	nbr = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	a = nbr % 10 + '0';
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	write(fd, &a, 1);
	return ;
}

// int main() {
// 	int n = 483648;

// 	ft_putnbr_fd(n, 1);
// 	return 0;
// }
