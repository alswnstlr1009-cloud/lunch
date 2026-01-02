/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:35:38 by jmin              #+#    #+#             */
/*   Updated: 2026/01/02 10:21:21 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list *new_node;
	
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// #include<stdio.h>

// int main(){
// 	t_list *test_node;
// 	char *data = "Hello, 42!";

// 	test_node = ft_lstnew(data);

// 	printf("노드의 주소 %p\n", test_node);
// 	printf("노드의 컨텐트 %s\n", (char *)test_node->content);
// 	printf("다음노드의 주소 %p\n", test_node->next);
	
// 	free(test_node);
// 	return (0);
// }