/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:53:19 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 12:53:20 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t strLen;
    char *newStr;
    int i;

    strLen = ft_strlen(s);
    newStr = malloc(sizeof(char) * strLen);
    i = 0;

    while (newStr[i])
    {
        newStr[i] = (*f)(i, s[i]);
        i++;
    }

    return (newStr);
}