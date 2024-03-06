/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:41:56 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:26:19 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				a;

	a = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
	{
		while (a < len)
		{
			((char *)dst)[a] = ((char *)src)[a];
			a++;
		}
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char * r[4] = "hihi";
	char * t[5] = "loca";
	size_t n = 4;

	printf("%s", t);
	ft_memmove(t, r, n);
	printf("%s", t);
	printf("%s", r);
	return(0);
}*/
