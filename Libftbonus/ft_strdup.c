/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:21:22 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:29:19 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		l;
	char	*s2;

	i = 0;
	l = ft_strlen((char *)s1);
	s2 = malloc(l + 1);
	if (s2 == NULL)
		return (NULL);
	while (i <= l && s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char s1[5] = "hola";

	printf("%s\n", ft_strdup(s1));
	printf("%s\n", strdup(s1));
	return(0);
}*/
