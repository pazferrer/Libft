/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:44:18 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:32:36 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char c, char const *set)
{
	int	i;
	int	i2;

	i = 0;
	i2 = (ft_strlen((char *)set) - 1);
	while (i <= i2)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_last1(int len, int i, char const *set, char const *s1)
{
	int	last;

	last = len - 1;
	len = last;
	while (len >= i && (ft_search(s1[len], set) == 1))
	{
		if (ft_search (s1[len], set) == 1)
			len--;
		if (ft_search (s1[len], set) == 0)
			last = len;
	}
	return (last);
}

static int	ft_start1(int len, int i, char const *set, char const *s1)
{
	int	first;

	first = i;
	while (i <= len && (ft_search(s1[i], set) == 1))
	{
		if (ft_search (s1[i], set) == 1)
			i++;
		if (ft_search (s1[i], set) == 0)
			first = i;
	}
	return (first);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sret;
	int		i;
	int		len;
	int		first;
	int		last;

	i = 0;
	first = 0;
	len = (int)ft_strlen((char *)s1);
	first = ft_start1(len, i, set, s1);
	last = (ft_last1(len, i, set, s1));
	if (!s1 || !set)
		return (NULL);
	if (first > last)
		return (ft_substr("\0", 0, 1));
	sret = ft_substr(s1, first, (size_t)(last - first + 1));
	if (sret == NULL || !sret || !s1 || !set)
		return (NULL);
	i = 0;
	while (first <= last)
		sret[i++] = s1[first++];
	sret[i] = '\0';
	return (sret);
}
/*
#include <stdio.h>
int main()
{
	char const s1[] = "";
	char const set[] = "";

	printf("%s\n", ft_strtrim(s1, set));
}*/
