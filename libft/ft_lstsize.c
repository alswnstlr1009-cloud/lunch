/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 10:22:11 by jmin              #+#    #+#             */
/*   Updated: 2026/01/04 21:10:42 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return i;
}

// #include <stdio.h>

// int main()
// {
// 	t_list *node1 = ft_lstnew("First");
// 	t_list *node2 = ft_lstnew("Second");
// 	t_list *node3 = ft_lstnew("Third");
// 	int size;

// 	node1->next = node2;
// 	node2->next = node3;

// 	size = ft_lstsize(node1);
// 	printf("리스트의 크기: %d\n", size);
// 	printf("빈 리스트의 크기: %d\n", ft_lstsize(NULL));

// 	return(0);
// }