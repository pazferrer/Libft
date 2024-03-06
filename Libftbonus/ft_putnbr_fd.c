/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:36:20 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:28:27 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_num(int nb2, int fd2)
{
	int		nums[10];
	int		i;
	char	printable;

	i = 0;
	while (nb2 > 0)
	{
		nums[i] = nb2 % 10;
		nb2 = nb2 / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		printable = nums[i] + 48;
		write(fd2, &printable, 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0 && n > -2147483648)
	{
		write(fd, "-", 1);
		print_num(n * -1, fd);
	}
	else if (n > 0 && n <= 2147483647)
		print_num(n, fd);
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
		write(fd, "0", 1);
}
/*
int	main()
{
	int i;

	i = 8;
	ft_putnbr_fd(i, 1);
	return (0);
}*/
