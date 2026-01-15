/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:05:34 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:12:37 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	int test = 'a';

// 	printf("매개변수: %c\n0이면 알파벳아님: %d\n",test,ft_isalpha(test));
// 	printf("매개변수: %c\n0이면 알파벳아님: %d\n",test, !!isalpha(test));
// 	return 0;
// }