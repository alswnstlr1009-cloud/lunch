/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:36:56 by jmin              #+#    #+#             */
/*   Updated: 2025/12/25 17:21:12 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int ft_strlen(char const *s1)
{
	int i;

	i = 0;
	while(s1[i])
		i++;
	return i;
}

static int head(char const *s1, char const *set)
{
	int len;
	int i;
	int j;
	int set_len;
	int head_len;
	int found;

	len = ft_strlen(s1);
	set_len = ft_strlen(set);
	i = 0;
	head_len = 0;
	while(i < len)
	{
		j = 0;
		found = 0;
		while(j < set_len)
		{
			if (s1[i] == set[j])
			{
				found = 1;
				head_len++;
				break;
			}
			j++;
		}
		if (found == 0)
			break;
		i++;
	}
	return head_len;
}


static int tail(char const *s1, char const *set)
{
	int len;
	int i;
	int j;
	int set_len;
	int tail_len;
	int found;

	len = ft_strlen(s1);
	set_len = ft_strlen(set);
	i = len - 1;
	tail_len = 0;
	while(i >= 0)
	{
		j = 0;
		found = 0;
		while(j < set_len)
		{
			if (s1[i] == set[j])
			{
				tail_len++;
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
			break;
		i--;
	}
	return tail_len;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int head_len;
	int tail_len;
	int i;
	int real_len;
	char *ret;
	
	head_len = head(s1, set);
	tail_len = tail(s1, set);
	real_len = ft_strlen(s1) - head_len - tail_len;
	ret = (char *)malloc(real_len + 1);
	if (!ret)
		return NULL;
	i = 0;
	while(i < real_len)
	{
		ret[i] = s1[head_len + i];
		i++;
	}
	ret[i] = '\0';
	return ret;

}

#include <stdio.h>

int main(){
	char const *s1 = "123a123";
	char const *set = "31";
	char *run;
	
	run = ft_strtrim(s1, set);
	printf("%s", run);
	free(run);

	return 0;
}