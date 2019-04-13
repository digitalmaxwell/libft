/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:44:56 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/14 15:50:45 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		i2;
	int		i3;
	int		match;

	i = 0;
	i2 = 0;
	i3 = 0;
	match = 0;

	if (!*needle || !needle)
		return ((char *)haystack);

	while (haystack[i] && !match)
	{
		if (haystack[i] == needle[0])
		{
			i2 = i;
			i3 = 0;
			match = 1;

			while (needle[i3] && haystack[i2])
			{
				if (needle[i3] != haystack[i2])
					match = 0;
				i2++;
				i3++;
			}
			if (match && !needle[i3])
				return (((char *)haystack + i));
		}
		i++;
	}
	return (NULL);
}
