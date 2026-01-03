/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:06:17 by jmin              #+#    #+#             */
/*   Updated: 2026/01/02 16:43:34 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;

	while(lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// #include <string.h>


// void make_0(void *content)
// {
// 	*(char *)content = '0';
// }

// int main(void)
// {
// 	t_list *n1 = ft_lstnew(strdup("1"));
// 	t_list *n2 = ft_lstnew(strdup("2"));

// 	n1->next = n2;

// 	printf("전: %s\n %s\n", (char *)n1->content, (char *)n2->content);
// 	ft_lstiter(n1, make_0);
// 	printf("후: %s\n %s\n", (char *)n1->content, (char *)n2->content);
//  ft_lstclear(&n1, free);
// 	return 0;
// }