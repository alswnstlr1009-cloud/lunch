/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:00:42 by jmin              #+#    #+#             */
/*   Updated: 2026/01/16 20:36:11 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	format_type(char format, va_list args)
{
	if (format == 'c')
		return (ft_character(va_arg(args, int)));
	if (format == 's')
		return (ft_string(va_arg(args, char *)));
	if (format == 'p')
		return (ft_pointer(va_arg(args, void *)));
	if (format == 'd')
		return (ft_decimal(va_arg(args, int)));
	if (format == 'i')
		return (ft_integer(va_arg(args, int)));
	if (format == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	if (format == 'x')
		return (ft_hexadecimal(va_arg(args, unsigned int)));
	if (format == 'X')
		return (ft_uphexadecimal(va_arg(args, unsigned int)));
	if (format == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			len += format_type(format[i + 1], args);
			i += 2;
		}
		else
		{
			len += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (len);
}

// #include <stdio.h>    // 실제 printf용
// #include "ft_printf.h" // 본인의 ft_printf용
// #include <limits.h>

// // int main(void)
// // {
// // 	int len;
// // 	int len2;

// // 	len = printf("%u\n", UINT_MAX);
// // 	len2 = ft_printf("%u\n", UINT_MAX);
// // 	printf("%i, %i", len, len2);
// // }

// int main(void)
// {
//     int real_len;
//     int ft_len;

//     printf("--- Character Test ---\n");

//     // 1. 일반 문자 테스트
//     printf("[Real]   : ");
//     real_len = printf("%c", 'A');
//     printf(" | return: %d\n", real_len);

//     ft_printf("[ft]     : ");
//     ft_len = ft_printf("%c", 'A');
//     ft_printf(" | return: %d\n", ft_len);

//     printf("----------------------\n");

//     // 2. 특수 문자 및 공백 테스트
//     printf("[Real]   : ");
//     real_len = printf("[%c]", '\t');
//     printf(" | return: %d\n", real_len);

//     ft_printf("[ft]     : ");
//     ft_len = ft_printf("[%c]", '\t');
//     ft_printf(" | return: %d\n", ft_len);

//     printf("----------------------\n");

//     // 3. NULL 문자 (\0) 테스트 (가장 중요!)
//     // NULL 문자는 화면에 보이지 않지만 1바이트를 차지해야 합니다.
//     printf("[Real]   : ");
//     real_len = printf("%c", '\0');
//     printf(" (End) | return: %d\n", real_len);

//     ft_printf("[ft]     : ");
//     ft_len = ft_printf("%c", '\0');
//     ft_printf(" (End) | return: %d\n", ft_len);

//     return (0);
// }