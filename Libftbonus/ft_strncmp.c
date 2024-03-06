/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:25:20 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:31:28 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ret;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	ret = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (ret);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	const char *s1;
	const char *s2;
	size_t n;
	int a;

	s1 = "ryesxhfgjx";
	s2 = "ryestt";
	n = 6;
	a = ft_strncmp(s1, s2, n);
	printf("%d/n", a);
	printf("funcion %d/n", strncmp(s1, s2, n));
}*/
