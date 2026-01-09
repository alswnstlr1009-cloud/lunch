/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:49 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:16:23 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(){
// 	int test = 66;
// 	printf("매개변수: %c\n0아니면 출력가능: %d\n", test, ft_isprint(test));
// 	printf("매개변수: %c\n0아니면 출력가능: %d\n", test, !!isprint(test));
// 	return 0;
// }