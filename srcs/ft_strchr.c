/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:48:43 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/13 21:57:43 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *s2;

	s2 = (char *)s;
	c = (unsigned char)c;
	while (*s2)
	{
		if (*s2 == c)
			return (s2);
		s2++;
	}
	if (!*s2 && !c)
		return (s2);
	else
		return (NULL);
}
