/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:10:59 by jmin              #+#    #+#             */
/*   Updated: 2026/01/05 14:07:29 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// static void del(void *content)
// {
// 	free(content);
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
// 	t_list *node;
// 	char *str;

// 	str = strdup("Hello World");
// 	node = ft_lstnew(str);

// 	if(!node)
// 		return (1);

// 	printf("--- 삭제전 ---\n");
// 	printf("노드 주소 %p\n", (void *)node);
// 	printf("노드 내용: %s\n", (char *)node->content);
// 	printf("\n--- ft_lstdelone 실행 ---\n");
// 	ft_lstdelone(node, del);
// 	printf("\n--- 삭제 완료 ---\n");

// 	return (0);
// }