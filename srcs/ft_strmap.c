/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:17:17 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 12:20:10 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    size_t strLen;
    char *newStr;
    int i;

    strLen = ft_strlen(s);
    newStr = malloc(sizeof(char) * strLen);
    i = 0;

    while (newStr[i])
    {
        newStr[i] = (*f)(s[i]);
        i++;
    }

    return (newStr);
}