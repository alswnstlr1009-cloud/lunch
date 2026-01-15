/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 20:04:52 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:44:12 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c += 'A' - 'a';
	return (c);
}

// #include <stdio.h>
// #include<ctype.h>
// int main()
// {
// 	int c = 'a';
// 	int d = 'a';
// 	printf("%c\n", ft_toupper(c));
// 	printf("%c", toupper(d));

// 	return 0;
// }