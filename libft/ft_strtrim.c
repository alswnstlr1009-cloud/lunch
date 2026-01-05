/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 13:36:56 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:13:59 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ret;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ret = ft_substr(s1, start, end - start);
	return (ret);
}

// #include <stdio.h>
// int main(){
// 	char const *s1 = "111";
// 	char const *set = "1";
// 	char *run;
// 	run = ft_strtrim(s1, set);
// 	printf("%s", run);
// 	free(run);
// 	return 0;
// }