/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:22:00 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 14:22:01 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *subStr;
    int i;

    subStr = malloc(sizeof(char) * len + 1);
    i = 0;

    if (!subStr)
        return (NULL);

    while (s[start] && start < len)
    {
        subStr[i] = s[start];
        start++;
        i++;
    }

    subStr[start] = '\0';
    return (subStr);
}