/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:10:07 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:23:37 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	x;

	x = 0;
	str = (char *)s;
	while (x < n)
	{
		str[x] = 0;
		x++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int main ()
{
	char z[] = "heyyyy";
	char s[] = "heyyyy";
	size_t n;
	n = 3;
	
	ft_bzero(z, n);
	printf("%s\n", z);
	printf("%s\n", bzero(s, n));
	return (0);
}*/
