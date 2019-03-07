/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:17:55 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/12 10:53:51 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		((unsigned char *)dst)[n] = ((unsigned char *)src)[n];

	return (dst);
}
