/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:28:32 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:27:39 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	n;

	n = 0;
	str = (char *)b;
	while (n < len)
	{
		str[n] = c;
		n++;
	}
	return (b);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	int c;

	c = 'a';

	char b[5] = "hola";
	char d[5] = "hola";
	size_t len;

	len = 7;
	ft_memset(b, c, len);
	printf("%s\n", b);
	memset(d, c, len);
	printf("%s\n", d);
}*/
