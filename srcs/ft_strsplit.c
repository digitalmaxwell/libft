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

char **ft_strsplit(char const *s, char c)
{
    size_t wordLen;
    size_t strLen;
    int wordStart;
    char **split;
    int i;
    int i2;
    int i3;

    i = 0;
    i2 = 0;
    i3 = 0;
    strLen = ft_strlen((char *)s);
    split = malloc(sizeof(char **) * (countWords((char *)s, c) + 1));
    wordStart = 0;
    wordLen = 0;

    while (s[i])
    {
        if (s[i] == c)
        {
            if (wordStart)
                wordStart = 0;
        }
        else if (!wordStart)
        {
            wordStart = i;
            i2 = wordStart;
            while (s[i2] && s[i2] != c)
            {
                i2++;
                wordLen++;
            }
            split[i3] = ft_strsub(s, wordStart, wordStart + wordLen);
            i3++;

            wordLen = 0;
        }
        i++;
    }

    split[i3] = 0;
    return (split);

}

// int     main()
// {
//     char s[] = "*test**test*test***testt";
//     char c = '*';
//     char **split;
    
//     split = malloc(sizeof(char *) * 4);
//     split = ft_strsplit(s, c);

//     while (*split)
//     {
//         printf("%s", *split);
//         split++;        
//     }

//     return (0);
// }