/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:33:07 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:29:56 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	l1;
	size_t	l2;
	size_t	i;

	i = 0;
	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	s3 = malloc(l1 + l2 + 1);
	if (s3 == NULL)
		return (NULL);
	ft_memcpy(s3, s1, l1);
	while (i <= l2)
	{
		s3[l1] = s2[i];
		i++;
		l1++;
	}
	return (s3);
}
/*
#include <stdio.h>
int main()
{
	char const *s1 = "hola";
	char const *s2 = " loca";

	printf("%s\n", ft_strjoin(s1, s2));
	return(0);
}*/
