/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:27:31 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/19 18:27:33 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	countWords(char *s, char c)
{
	int words;
	int i;
	int is_word;

	i = 0;
	words = 0;
	is_word = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			if (is_word)
				is_word = 0;
		}
		else if (!is_word)
		{
			words++;
			is_word = 1;
		}
		i++;
	}
	return (words);
}

static size_t	word_len(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static void	clean(char **split, size_t cur)
{
	while (cur > 0)
	{
		cur--;
		ft_strdel(&split[cur]);
	}
	ft_strdel(split);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t wordLen;
	size_t strLen;
	int words;
	char **split;
	int i;

	if (!s)
		return (NULL);

	i = 0;
	wordLen = 0;
	strLen = ft_strlen((char *)s);
	words = countWords((char *)s, c);
	split = malloc(sizeof(char **) * (words + 1));

	if (!split)
		return (NULL);
	while (i < words)
	{
		s = next_word(s, c);
		split[i] = ft_strsub(s, 0, word_len(s, c));
		if (!split[i])
		{
			clean(split, i);
			return (NULL);
		}
		i++;
		s += word_len(s, c);
	}
	split[words] = 0;
	return (split);
}
