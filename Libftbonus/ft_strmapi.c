/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:38:09 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:31:07 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*r;

	i = 0;
	r = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (r == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*
#include <stdio.h>
#include <unistd.h>

char	ft_zelo(unsigned int fd, char s)
{
	char	r[2] = "a";

	fd = 1;
	s = 'a';
	write (1, r, 2);
	write (1, "\n", 1);	
	return (r[0]);
}

int	main()
{
	char *s = "hola";
	printf("%s\n", s);
	s = ft_strmapi(s, ft_zelo);
	printf("%s\n", s);
	return (0);
}*/
