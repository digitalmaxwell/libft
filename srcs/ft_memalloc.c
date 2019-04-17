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

void	*ft_memalloc(size_t size)
{
	void *arr;

	arr = NULL;
	if (size > 0 && size <= 2147483647)
	{
		arr = malloc(sizeof(int) * size);
		if (arr == NULL)
			return (NULL);
		ft_bzero(arr, size);
	}
	return (arr);
}
