/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:35:38 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:23:22 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	r;
	int	n;

	i = 0;
	r = 0;
	n = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			n = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r * n);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *x;
	int i;

	x = "    	-89";
	i = ft_atoi(x);
	printf("%d\n", i);
	printf("atoi %d\n", atoi(x));
}*/
/*

"               			-632"
"5678hjkk6789"
"++7574"
"    sdaf"

*/
