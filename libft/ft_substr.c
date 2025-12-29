/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 11:25:39 by jmin              #+#    #+#             */
/*   Updated: 2025/12/25 13:07:52 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ret;
	unsigned int i;
	size_t s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	ret = (char*)malloc(len+1);
	if (!ret)
		return NULL;
	i = 0;
	while (i < len && start < s_len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return ret;
}

#include <stdio.h>
#include <string.h>
int main(){
	char const *s = "abc";
	unsigned int start = 10;
	size_t len = 3;

	printf("return : %s\n", ft_substr(s, start, len));
	char *sub = ft_substr(s, start, len);
	printf("len = %zu\n", strlen(sub));
	free(sub);

	return 0;
}