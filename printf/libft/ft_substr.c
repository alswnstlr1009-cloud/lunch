/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 11:25:39 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:12:48 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	size_t			s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > s_len - start)
		len = s_len - start;
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

// #include <string.h>
// #include <stdio.h>
// int main(){
// 	char const *s = "abc";
// 	unsigned int start = 10;
// 	size_t len = 3;

// 	printf("return : %s\n", ft_substr(s, start, len));
// 	char *sub = ft_substr(s, start, len);
// 	printf("len = %zu\n", strlen(sub));
// 	free(sub);

// 	return 0;
// }