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

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*pos;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;

	if (!needle || ft_strlen(needle) == 0)
		return (char *)haystack;

	while (haystack[i2] && len--)
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
    
    if (!needle[i])
	    return (pos);

    return (NULL);
}

// int		main()
// {
// 	char haystack[] = "stringstring";
// 	char needle[] = "ing";
//     size_t len = 6;

// 	printf("%s", strnstr(haystack, needle, len));
// 	return (0);
// }