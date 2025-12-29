/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:13:09 by jmin              #+#    #+#             */
/*   Updated: 2025/12/25 13:35:01 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len_1;
	size_t len_2;
	size_t i;
	char *ret;

	len_1 = 0;
	len_2 = 0;
	while(s1[len_1])
		len_1++;
	while(s2[len_2])
		len_2++;
	ret = (char*)malloc(len_1 + len_2 + 1);
	if (!ret)
		return NULL;
	i = 0;
	while (i < len_1)
	{
		ret[i] = s1[i];
		i++;
	}
	while (i < len_1 + len_2)
	{
		ret[i] = s2[i - len_1];
		i++;
	}
	ret[i] = '\0';
	return ret;
}

#include <stdio.h>
#include <string.h>
int main(){
	char const *s1 = "abc";
	char const *s2 = "def";
	char *run = ft_strjoin(s1, s2);
	
	printf("return : %s\n length : %lu", run, strlen(run));
	free(run);

	return 0;
	
}