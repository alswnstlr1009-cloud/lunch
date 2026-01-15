/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:31:56 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:15:36 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(){
// 	int test = 66;
// 	printf("매개변수: %c\n0아니면아스키: %d\n", test, ft_isascii(test));
// 	printf("매개변수: %c\n0아니면아스키: %d\n", test, isascii(test));
// 	return 0;
// }