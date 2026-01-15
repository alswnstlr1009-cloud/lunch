/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 21:01:15 by jmin              #+#    #+#             */
/*   Updated: 2026/01/05 13:08:42 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main(){
// 	t_list *a = ft_lstnew("123");
// 	t_list *b = ft_lstnew("abc");
// 	t_list **list = &b;

// 	printf("기존 첫 노드: %s\n", (char*)(*list)->content);
// 	printf("새로운 리스트: %s\n", (char*)a->content);
// 	ft_lstadd_front(list, a);
// 	printf("리스트의 첫 노드:%s\n", (char*)(*list)->content);
// 	return 0;
// }