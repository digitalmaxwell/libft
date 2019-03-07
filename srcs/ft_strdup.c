/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:58:42 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/13 17:13:20 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strdup(const char *s1)
{
	char *copy;
	char *copy2;

	copy = malloc(sizeof(char *) * ft_strlen(s1) + 1);
	copy2 = copy;

	if (!copy)
	{
		errno = ENOMEM;
		return (NULL);
	}

	while (*s1)
	{
		*copy = *s1;
		s1++;
		copy++;
	}

	*copy = '\0';

	return (copy2);
}