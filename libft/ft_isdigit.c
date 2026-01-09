/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:27:33 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:13:48 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>
// #include <ctype.h>

// int main(){
// 	int test = '3';

// 	printf("매개변수: %c\n0이면10진수아님: %d\n", test, ft_isdigit(test));
// 	printf("매개변수: %c\n0이면10진수아님: %d", test, !!isdigit(test));
// 	return 0;
// }