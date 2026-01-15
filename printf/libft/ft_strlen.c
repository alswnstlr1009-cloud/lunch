/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:58:09 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 09:17:28 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main(){
// 	const char *str = "123";
// 	printf("매개변수: %s\n문자열길이: %zu\n", str, ft_strlen(str));
// 	printf("매개변수: %s\n문자열길이: %zu", str, strlen(str));
// 	return 0;
// }