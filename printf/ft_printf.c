/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:00:42 by jmin              #+#    #+#             */
/*   Updated: 2026/01/15 13:15:39 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

int ft_printf(const char *format, ...)
{
	va_list args;
	int len;
	int i;
	
	if (!format)
		return (0);
	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			len += format_type(&format[i + 1], args);
			i += 2;
		}
		else
		{
			len += type_char(&format[i], args);
			i++;
		}
	}
	va_end(args);
	return (len);
}