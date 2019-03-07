/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:09:49 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/13 16:52:28 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while(n--)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c) {
			return (((void *)&((unsigned char *)s)[i]));
		}
		i++;
	}

	return (NULL);
}
