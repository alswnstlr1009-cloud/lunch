/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:21:40 by jmin              #+#    #+#             */
/*   Updated: 2026/01/05 14:25:55 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
}

// #include <string.h>
// #include <stdio.h>

// static void del (void *content)
// {
// 	free(content);
// }

// int main(){
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;

// 	head = ft_lstnew(strdup("첫번째 노드"));
// 	node1 = ft_lstnew(strdup("두번쨰 노드"));
// 	node2 = ft_lstnew(strdup("세번째 노드"));

// 	head->next = node1;
// 	node1->next = node2;

// 	printf("--- 삭제 전 ---\n");
// 	printf("head 주소: %p\n", (void *)head);
// 	printf("\n--- ft_lstclear 실행 ---\n");
// 	ft_lstclear(&head, del);
// 	printf("\n--- 삭제 후 ---\n");
// 	printf("head의 현재 값: %p\n", (void *)head);

// 	if (head == NULL)
// 		printf("결과: 성공! head가 NULL로 초기화되었습니다\n");
// 	else
// 		printf("결과: 실패! head가 여전히 어딘가를 가리킵니다.\n");
// 	return (0);
// }