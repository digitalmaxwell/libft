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

char *ft_strstr(const char *haystack, const char *needle)
{
	char	*pos;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;

	if (!needle || ft_strlen(needle) == 0)
		return (char *)haystack;

	while (haystack[i2])
	{
		if (haystack[i2] == needle[i])
		{
			if(i == 0)
				pos = (char *)&haystack[i2];
			i++;
		}
		else if(needle[i])
		{
			i = 0;
			pos = NULL;
		}
		i2++;
	}

	return (pos);
}

// int		main()
// {
// 	char haystack[] = "stringstring";
// 	char needle[] = "ing";

// 	printf("%s", strstr(haystack, needle));
// 	return (0);
// }
