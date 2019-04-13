/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:45:18 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/14 17:45:20 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		i2;
	size_t		i3;
	int			match;

	i = 0;
	i2 = 0;
	i3 = 0;
	match = 0;

	if (!*needle || !needle)
		return ((char *)haystack);

	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			i2 = i;
			i3 = 0;
			match = 1;

			while (needle[i3] && haystack[i2] && i2 < len && i3 < len)
			{
				if (needle[i3] != haystack[i2])
					match = 0;
				i2++;
				i3++;
			}
			if (match && !needle[i3])
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
