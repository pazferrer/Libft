/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:58:29 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:32:53 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (start > (unsigned int)ft_strlen(s))
	{
		ret = malloc(sizeof(char) * 1);
		if (ret == NULL)
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	ret = malloc((sizeof(char) * (len + 1)));
	if (ret == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	size_t len;
	char const s[8] = "hola_tu";
	unsigned int start;

	len = 3;
	start = 3;
	printf("%s\n", ft_substr(s, start, len));
	return(0);
}*/
