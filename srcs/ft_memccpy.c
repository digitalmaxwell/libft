/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:30:07 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/12 14:40:34 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *restrict src, int c, size_t n)
{
	size_t			i;
	unsigned char	c2;

	i = 0;
	c2 = (unsigned char)c;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		if (c2 == ((unsigned char *)dst)[i - 1])
			return (&((unsigned char *)dst)[i]);
	}
	return (NULL);
}
