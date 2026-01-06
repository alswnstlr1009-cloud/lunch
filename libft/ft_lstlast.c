/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 11:15:52 by jmin              #+#    #+#             */
/*   Updated: 2026/01/05 13:17:56 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int main()
// {
// 	t_list *node1 = ft_lstnew("First");
// 	t_list *node2 = ft_lstnew("Second");
// 	t_list *node3 = ft_lstnew("Last");

// 	node1->next = node2;
// 	node2->next = node3;

// 	t_list *last = ft_lstlast(node1);
// 	if (last)
// 		printf("마지막 노드의 내용: %s\n", (char *)last->content);
// 	return (0);
// }