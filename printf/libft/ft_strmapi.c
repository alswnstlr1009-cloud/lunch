/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 14:14:52 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:14:18 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	ret = (char *)malloc(i + 1);
	if (!ret)
		return (NULL);
	ret[i] = '\0';
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// // 테스트용 함수 f: 짝수 인덱스는 대문자로, 홀수는 소문자로 변환
// char	test_func(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 	{
// 		if (c >= 'a' && c <= 'z')
// 			return (c - 32);
// 	}
// 	else
// 	{
// 		if (c >= 'A' && c <= 'Z')
// 			return (c + 32);
// 	}
// 	return (c);
// }
// int	main(void)
// {
// 	char	*str = "abcdefghijk";
// 	char	*result;

// 	printf("원본 문자열: %s\n", str);

// 	// ft_strmapi 호출
// 	result = ft_strmapi(str, test_func);

// 	if (result == NULL)
// 	{
// 		printf("메모리 할당 실패!\n");
// 		return (1);
// 	}
// 	printf("결과 문자열: %s\n", result);
// 	printf("예상 결과  : AbCdEfGhIjK\n");
// 	// malloc으로 생성된 문자열이므로 반드시 free
// 	free(result);
// 	return (0);
// }