/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:44:26 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:10:35 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *new_list;
	t_list **cursur;
	t_list *new_node;
	void	*cont;

	if (!lst || !f || !del)
		return NULL;
	cursur = &new_list;
	new_list = NULL;
	while(lst)
	{
		cont = f(lst->content);
		new_node = ft_lstnew(cont);
		if	(!new_node)
		{
			del(cont);
			ft_lstclear(&new_list, del);
			return NULL;
		}
		*cursur = new_node;
		cursur = &((*cursur)->next);
		lst = lst->next;
	}
	return new_list;
}

// #include <stdio.h>
// #include <string.h>

// void del(void *con)
// {
// 	free(con);
// }

// void *make_0(void *content)
// {
// 	char *new_str = strdup((char *)content);
// 	if (!new_str)
// 		return (NULL);
// 	new_str[0] = '0';
// 	return (new_str);
// }

// int main(void)
// {
// 	t_list *n1 = ft_lstnew(strdup("1"));
// 	t_list *n2 = ft_lstnew(strdup("2"));
// 	n1->next = n2;
	
// 	t_list *new_list = NULL;

// 	printf("원본: %s\n원본: %s\n", (char *)n1->content, (char *)n2->content);
// 	new_list = ft_lstmap(n1, *make_0, del);
// 	if(!new_list)
// 	{
// 		printf("생성실패!\n");
// 		return (1);
// 	}
// 	printf("후: %s\n", (char *)new_list->content);
//  	if (new_list->next)
// 		printf("후: %s\n", (char *)new_list->next->content);

// 	ft_lstclear(&n1, del);
// 	ft_lstclear(&new_list, del);
// 	return 0;
// }