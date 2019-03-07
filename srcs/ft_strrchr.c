/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:19:11 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/14 15:44:03 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *lastFound;
	int i;

	lastFound = NULL;
	i = 0;

	while (s[i])
	{
		if (s[i] == (char)c) lastFound = (char *)&s[i];
		i++;
	}

	if (!*s && !c)
		lastFound = (char *)&s[i];
	
	return (lastFound);
}

// int		main()
// {
// 	char test[] = "maxwell 2";
// 	int c = 2;

// 	printf("%s", ft_strchr(test, c));
// 	return (0);
// }
