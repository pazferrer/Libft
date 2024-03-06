/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferrer- <pferrer-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:54:17 by pferrer-          #+#    #+#             */
/*   Updated: 2024/02/08 16:29:01 by pferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word(char const *s, char c)
{
	size_t	words;
	size_t	l;
	int		tmp;

	l = 0;
	words = 0;
	while (s[l])
	{
		tmp = 0;
		if (s[l] != c)
		{
			while (s[l + tmp] != c && s[l + tmp])
				tmp++;
			words++;
			l += tmp;
		}
		else
			l++;
	}
	return (words);
}

static unsigned int	ft_starts(char const *s, char c, int i)
{
	unsigned int	word;
	unsigned int	i2;

	i2 = 0;
	word = 0;
	while (s[i2] == c)
		i2++;
	while (s[i2] != '\0')
	{
		if (word == (unsigned int)i)
			return (i2);
		if (s[i2] != c && s[i2] != '\0')
		{
			word++;
			while (s[i2] != c && s[i2] != '\0')
				i2++;
		}
		while (s[i2] == c && s[i2] != '\0')
			i2++;
	}
	return (i2);
}

static unsigned int	ft_len(char const *s, char c, int i)
{
	unsigned int	i2;

	i2 = ft_starts(s, c, i);
	while (s[i2] != '\0' && s[i2] != c)
		i2++;
	return ((unsigned int)(i2 - ft_starts(s, c, i)));
}

static void	ft_freedom(char **split, int i)
{
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	char			**split;
	unsigned int	word;

	i = 0;
	word = ft_word(s, c);
	split = malloc(sizeof(char *) * (word + 1));
	if (split == NULL)
		return (NULL);
	while (word > 0)
	{
		split[i] = ft_substr(s, ft_starts(s, c, i), ft_len(s, c, i));
		if (!split[i])
		{
			ft_freedom(split, (int)i);
			return (NULL);
		}
		i++;
		word--;
	}
	split[i] = NULL;
	return (split);
}
/*
#include <stdio.h>

int main(void)
{
	char **result = ft_split("hello!", ' ');
	int i = 0;

	while (result[i] != NULL)
	{
    printf("%s\n", result[i]);
    i++;
	}
	printf("%s\n", result[i]);
}*/
