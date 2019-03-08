/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:14:14 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/13 19:43:12 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strcpy(char *dst, const char *src)
{
	size_t srcLen;
	int i;

	srcLen = ft_strlen(src);
	i = 0;

	while (i <= (int)srcLen)
	{
		dst[i] = src[i];
		i++;
	}
	
	return (dst);
}
