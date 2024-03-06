/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:18:12 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:31:45 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	if (needle[i1] == '\0')
		return ((char *)haystack);
	while (haystack[i1] != '\0' && i1 < (unsigned int)len)
	{
		i2 = 0;
		while (haystack[i1 + i2] == needle[i2] && (i1 + i2) < (unsigned int)len)
		{
			i2++;
			if (needle[i2] == '\0')
				return ((char *)&haystack[i1]);
		}
		i1++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
    const char *h;
    const char *n;
    size_t l;

    h = "oso, listo, bebe";
    n = "list";
    l = 45;
    printf("%s\n", ft_strnstr(h, n, l));
    printf("%s\n", strnstr(h, n, l));
}*/
