/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:00:42 by jmin              #+#    #+#             */
/*   Updated: 2026/01/16 15:04:10 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"
#include "ft_printf.h"

static int format_type(char format, va_list args)
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
		return (ft_HEXADECIMAL(va_arg(args, unsigned int)));
	if (format == '%')
	{
		write(1, '%', 1);
		return 1;
	}
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

int main(){
	
}