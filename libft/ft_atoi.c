/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:24:35 by jmin              #+#    #+#             */
/*   Updated: 2026/01/03 20:37:21 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	skip_space(const char *nptr, int i)
{
	while (nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	count;
	int	ret;

	count = 1;
	i = 0;
	i = skip_space(nptr, i);
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		count = -1;
		i++;
	}
	ret = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		ret = ret * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(ret * count));
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*nptr = "    +-123";

// 	printf("%d", ft_atoi(nptr));
// 	return (0);
// }
