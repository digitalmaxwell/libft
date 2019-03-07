/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:31:26 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/19 18:31:27 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int     isWhitespace(char c)
{
    if (c == ' ' || c == '\n' || c == '\t')
        return (1);
    return (0);
}

char    *ft_strtrim(char const *s)
{
    char *trimmed;
    size_t sLen;

    trimmed = (char *)s;

    while (*trimmed)
    {
        if (isWhitespace(*trimmed))
            trimmed++;
        else
            break;
    }

    sLen = ft_strlen(trimmed);
    
    while (isWhitespace(trimmed[sLen - 1]))
        sLen--;

    trimmed = ft_strsub(trimmed, 0, sLen);

    return(trimmed);
}

// int     main()
// {
//     char const trim[] = "       trim me         ";
//     printf("%s", ft_strtrim(trim));
//     return (0);
// }