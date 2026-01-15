/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:29:50 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:14:23 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

// #include <stdio.h>
// #include <ctype.h>

// int main(){
// 	int test = 'a';

// 	printf("매개변수: %c\n0아니면 알파벳혹은숫자: %d\n", test, ft_isalnum(test));
// 	printf("매개변수: %c\n0아니면 알파벳혹은숫자: %d\n", test, !!ft_isalnum(test));
// 	return 0;
// }