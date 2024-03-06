/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:39:03 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:30:11 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	int		i;
	size_t	r;

	i = 0;
	d = (size_t)ft_strlen((char *)dst);
	s = (size_t)ft_strlen((char *)src);
	r = d;
	if (size <= d)
		return (s + size);
	while (size > (r + 1) && src[i] != '\0')
	{
		dst[r] = src[i];
		r++;
		i++;
	}
	dst[r] = '\0';
	return (s + d);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char r[5] = "hihi ";
	const char t[5] = "loca";
	size_t n = 7;

	printf("%s\n", r);
	ft_strlcat(r, t, n);
	printf("%s\n", r);
}*/
