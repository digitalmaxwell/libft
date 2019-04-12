/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 09:07:19 by mchandle          #+#    #+#             */
/*   Updated: 2019/04/12 09:07:20 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list *newLst;

    if (!(newLst = (t_list *)malloc(sizeof(*newLst))))
        return (NULL);

    if (!content)
    {
        newLst->content_size = 0;
        newLst->content = NULL;
    }
    else
    {
        if (!(newLst->content = malloc(content_size)))
            return (NULL);

        ft_memcpy(newLst->content, content, content_size);
        newLst->content_size = content_size;

    }
    newLst->next = NULL;

    return (newLst);
}