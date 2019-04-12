/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 09:23:07 by mchandle          #+#    #+#             */
/*   Updated: 2019/04/12 09:23:08 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    del((*alst)->content, (*alst)->content_size);
    free(*alst);
    *alst = NULL;
}