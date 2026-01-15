/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:19:27 by jmin              #+#    #+#             */
/*   Updated: 2026/01/09 15:28:30 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t s_len;
	char	*ret;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (char *)calloc(1, sizeof(char));
	if (len > start + s_len)
		len = start + s_len;
	ret = (char *)malloc(len + 1 * sizeof(char));
	if (!ret)
		return NULL;
	i = 0;
	while(s[i] && i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	return (ret);
}


char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *ret;
	int len;
	int start;
	int end;
	int real_len;

	if (!s1 || !set)
		return NULL;
	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == ft_strchr(set, s1[i+1]))
			break;
		i++;
	}
	start = i;
	while (--len)
	{
		if (ft_strchr(set, s1[len]) == ft_strchr(set, s1[len-1]))
			break;
	}	
	end = len;
	real_len = end-start;
	ret = (char *)malloc(real_len + 1);
	if(!ret)
		return NULL;
	i = 0;
	while(--real_len)
		ret[i] = s1[start + i];
	return ret;
}


char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t s_len;
	char	*ret;

	if (!s)
		return NULL;
	s_len = ft_strlen(s);
	if (start > s_len)
		return malloc(1);
	if (len > start + s_len)
		len = start + s_len;
	ret = (char *)malloc(sizeof(char) * len);
	if (!ret)
		return NULL;
	ft_memmove(ret, s[start], len);
	return ret;
}