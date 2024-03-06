/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:32:52 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:24:06 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	if ((c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int main()
{
	int	y;
	y = ('>');
	int n;
	n = ft_isalnum(y);
	printf("%d", n);
}*/
