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

static int countWords(char *s, char c)
{
    int words;
    int i;
    int isWord;

    i = 0;
    words = 0;
    isWord = 0;

    while (s[i])
    {
        if (s[i] == c)
        {
            if (isWord)
                isWord = 0;
        }
        else if (!isWord)
        {
            words++;
            isWord = 1;
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

static char		*next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}


static void		clean(char **split, size_t cur)
{
	while (cur > 0)
	{
		cur--;
		ft_strdel(&split[cur]);
	}
	ft_strdel(split);
}

char **ft_strsplit(char const *s, char c)
{
    size_t wordLen;
    size_t strLen;
    int words;
    int wordStart;
    char **split;
    int curr;
    int i;
    int i2;
    int i3;

    curr = 0;
    i = 0;
    i2 = 0;
    i3 = 0;
    wordStart = 0;
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

// int     main()
// {
//     char s[] = "test***test**test*test*";
//     char c = '*';
//     char **split;
//     int i;

//     i = 0;

//     split = malloc(sizeof(char **) * 2);
//     split = ft_strsplit(s, c);

//     while (*split)
//     {
//         printf("%s\n", *split);
//         split++;
//     }

//     return (0);
// }