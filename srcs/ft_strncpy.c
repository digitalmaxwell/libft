/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:32:54 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/13 20:47:28 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;

	while (i < len)
	{
		if (src[i])
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}

	return (dst);
}

// int		main()
// {
// 	char test[] = "yoooooo";
// 	char test2[] = "ayye";
// 	int num = 5;

// 	printf("%s", ft_strncpy(test, test2, num));
// 	return (0);
// }
