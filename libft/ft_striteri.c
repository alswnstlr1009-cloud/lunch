/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:05:21 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 19:58:47 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// // 1. ft_striteri가 사용할 규칙 함수 (f)
// // 인덱스 i가 짝수이면 해당 글자를 대문자로 변환
// void my_test_f(unsigned int i, char *c)
// {
//     if (i % 2 == 0)
//     {
//         if (*c >= 'a' && *c <= 'z')
//             *c -= 32; // 소문자를 대문자로 변환
//     }
// }

// int main(void)
// {
//     // 주의: char *str = "hello" (리터럴)는 수정 불가능하므로 배열로 선언!
//     char str[] = "hello world";

//     printf("수정 전: %s\n", str);

//     // 함수 호출
//     ft_striteri(str, my_test_f);

//     printf("수정 후: %s\n", str);

//     return (0);
// }