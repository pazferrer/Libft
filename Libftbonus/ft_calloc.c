/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:33:13 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:23:53 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;
	size_t	i;

	i = 0;
	ret = malloc(size * count);
	if (!ret)
		return (NULL);
	while (i < (count * size))
	{
		ret[i] = '\0';
		i++;
	}
	return ((void *)ret);
}
/*
#include <stdio.h>
int	main()
{
	size_t count;
	size_t	size;
	void *ret;

	count = 10;
	size = 0;

	int i = 0;
	printf("[");
	ret = ft_calloc(count, size);
	while (i < 6)
	{
		printf(" %d ", ((char *)ft_calloc(count, size))[i]);
		if (i!=5) printf("|");
		i++;
	}
	printf("]\n");
	printf("%d\n", ((char *)calloc(count, size))[0]);
	free(ret);
}*/
