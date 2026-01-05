/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:11:02 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:12:10 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	mem;
	char	*ret;
	size_t	i;

	mem = 0;
	while (s[mem] != '\0')
		mem++;
	ret = (char *)malloc(mem + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < mem)
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

// #include <stdio.h>
// int main(){
// 	const char *s = "abc";

// 	printf("return ft: %s\n", ft_strdup(s));
// 	printf("return : %s\n", strdup(s));
// 	return 0;
// }

// char *ft_strdup(const char *s)
// {
// 	size_t mem;
// 	char *ret;
// 	size_t i;	

// 	mem = ft_strlen(s);
// 	ret = ft_calloc(mem + 1, sizeof(char));
// 	if (!ret)
// 		return NULL;
// 	ft_memcpy(ret, s, mem);
// 	return ret;
// }