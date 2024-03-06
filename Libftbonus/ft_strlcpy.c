/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:22:58 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:30:30 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	b;
	size_t	c;

	b = 0;
	c = 0;
	while (src[b] != '\0')
	{
		b++;
	}
	if (dstsize == 0)
		return (b);
	while (src[c] && c < (dstsize - 1))
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (b);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char r[4] = "hihi";
//	const char t[5] = "loca";
//	size_t n = 5;
	char	dest[20];

	printf("%s\n", r);
	ft_strlcpy(dest, "lor
	printf("%s\n", dest);
	printf("%s\n", r);
	return(0);
}*/
