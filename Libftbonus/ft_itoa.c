/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:46:56 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/12 13:30:20 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_neg(int n)
{
	char	*r;
	int		i;
	int		i2;
	int		num;

	i = 0;
	num = n;
	while (num < 0)
	{
		num = num / 10;
		i++;
	}
	r = (malloc(sizeof(char) * (i + 2)));
	if (r == NULL)
		return (NULL);
	i2 = 1 + i;
	r[0] = '-';
	n = n * -1;
	while (i > 0)
	{
		r[i--] = (n % 10) + '0';
		n /= 10;
	}
	r[i2] = '\0';
	return (&*r);
}

static char	*ft_pos(int n)
{
	char	*r;
	int		i;
	int		num;
	int		i2;

	i = 0;
	num = n;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	r = (malloc(sizeof(char) * (i + 1)));
	if (r == NULL)
		return (NULL);
	i2 = i--;
	while (i >= 0)
	{
		r[i--] = (n % 10) + '0';
		n /= 10;
	}
	r[i2] = '\0';
	return (&*r);
}

char	*ft_itoa(int n)
{
	char	*r;
	char	*ex;

	if (n < 0 && n != -2147483648)
		return (ft_neg(n));
	if (n > 0)
		return (ft_pos(n));
	if (n == 0)
	{
		r = (malloc(sizeof(char) * 2));
		if (r == NULL)
			return (NULL);
		r[0] = '0';
		r[1] = '\0';
		return (&*r);
	}
	if (n == -2147483648)
	{
		ex = "-2147483648";
		return (ft_substr(ex, 0, ft_strlen(ex)));
	}
	r = NULL;
	return (&*r);
}
/*
#include <stdio.h>
int	main()
{
	int	n;

	n = -8;
	printf("%s", ft_itoa(n));
	return (0);
}*/
