/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:48:19 by mchandle          #+#    #+#             */
/*   Updated: 2019/04/12 15:48:21 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newLst;
	t_list *list;

	if (!lst)
		return (NULL);
	list = f(lst);
	newLst = list;
	while (lst->next)
	{
		lst = lst->next;
		if(!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}

	return (newLst);
}
