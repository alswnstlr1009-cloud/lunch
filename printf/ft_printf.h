/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:58:52 by jmin              #+#    #+#             */
/*   Updated: 2026/01/16 20:43:58 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_character(int c);
int	ft_string(char *s);
int	ft_pointer(void *ptr);
int	ft_decimal(int d);
int	ft_integer(int i);
int	ft_unsigned(unsigned int n);
int	ft_hexadecimal(unsigned int n);
int	ft_uphexadecimal(unsigned int n);

#endif