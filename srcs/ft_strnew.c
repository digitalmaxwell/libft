/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:48:02 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 11:48:04 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strnew(size_t size)
{
    char *str;
    char *p;

    str = malloc(sizeof(char) * size);
    p = str;

    while (size--)
    {
        *str = 0;
        str++;
    }
    *str = '\0';
    return (p);
}