/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 11:37:00 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:10:11 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdio.h>
// int main(){
// 	t_list *head = NULL;
// 	ft_lstadd_back(&head, ft_lstnew("First"));
// 	ft_lstadd_back(&head, ft_lstnew("Second"));
// 	t_list *curr = head;
// 	while (curr)
// 	{
// 		printf("%s ->", (char *)curr->content);
// 		curr = curr->next;
// 	}
// 	printf("NULL\n");
// 	return (0);
// }