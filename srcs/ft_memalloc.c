/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 10:33:17 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 10:33:20 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    *ft_memalloc(size_t size)
{
    void *arr;
    int *arr2;

    arr = NULL;

    if (size > 0)
    {
        arr = malloc(sizeof(int) * size);
        arr2 = (int *)arr;

        while (*arr2)
        {
            *arr2 = 0;
            arr2++;
        }
    }

    return (arr);
}

// int     main()
// {
//     size_t size = 12;

//     printf("%s", ft_memalloc(size));
//     return (0);
// }