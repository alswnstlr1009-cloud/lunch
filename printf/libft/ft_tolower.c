/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 20:51:53 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:44:54 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		c += 'a' - 'A';
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	int c = 'A';
// 	int d = 'A';
// 	printf("%c\n", ft_tolower(c));
// 	printf("%c", tolower(d));

// 	return 0;
// }