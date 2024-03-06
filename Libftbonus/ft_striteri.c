/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:32:40 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:29:40 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <unistd.h>

void	ft_zelo(unsigned int fd, char *s)
{
	fd = 1;
	s = "a";
	write(1,s,1);
}

int	main()
{
	char s[6] = "hola ";
	printf("%s\n", s);
	ft_striteri(s, ft_zelo);
	return (0);
}*/
