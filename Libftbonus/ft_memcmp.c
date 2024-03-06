/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:16:43 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:25:50 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*x;
	char	*y;
	int		ret;

	i = 0;
	x = (char *)s1;
	y = (char *)s2;
	if (n == 0)
		return (0);
	while ((x[i] == y[i]) && i < (n - 1))
		i++;
	ret = ((unsigned char)x[i] - (unsigned char)y[i]);
	return (ret);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	size_t	n;
	
 char s1[5] = "hola";
char s2[8] = "hola tu";
	n = 89;
	printf("%d\n", ft_memcmp(s1, s2, n));
  	printf("%d\n", memcmp(s1, s2, n));
	return(0);
} */
