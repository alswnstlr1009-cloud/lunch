/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:55:02 by jmin              #+#    #+#             */
/*   Updated: 2025/12/29 14:14:39 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int get_len(int n)
{
	int len;
	
	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void fill_str(char *str, unsigned int num, int len)
{
	while(num > 0)
	{
		str[--len] = num % 10 + '0';
		num = num / 10;
	}
}


char *ft_itoa(int n)
{
	char *str;
	unsigned int num;
	int len;

	if (n < 0)
		num = -n;
	else
		num = n;
	len = get_len(n);
	str = (char*)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	fill_str(str, num, len);
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	
	return (str);
}

#include <stdio.h>

int main(){
	int n = 123;
	
	printf("%s\n", ft_itoa(n));
	return 0;
}

