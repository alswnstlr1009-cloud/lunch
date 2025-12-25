/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin <jmin@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:47:46 by jmin              #+#    #+#             */
/*   Updated: 2025/12/23 19:10:35 by jmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *ptr;
	size_t whole;
	size_t i;

	if (nmemb == 0 || size == 0)
		return malloc(0);
	if (nmemb > SIZE_MAX / size)
		return NULL;

	whole = nmemb * size;
	ptr = (unsigned char *)malloc(whole);
	if (!ptr)
		return NULL;
	i = 0;
	while (i < whole)
	{
		ptr[i] = 0;
		i++;
	}
	return ptr;
}

#include <stdio.h>

int main()
{
	int *arr;
	size_t i;

	arr = ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("calloc failed\n");
		return 1;
	}
	 for (i = 0; i < 5; i++)
        printf("arr[%zu] = %d\n", i, arr[i]);
	
	free(arr);
	return 0;
}