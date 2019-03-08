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

    str = (char *)malloc(sizeof(char) * size + 1);
    if (!str)
        return (NULL);
    ft_bzero(str, size + 1);
    return (str);
}