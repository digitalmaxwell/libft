/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:17:17 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 12:20:10 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *ptr;
	char *ptr2;
	char *new_str;

	if (!s || !(new_str = malloc(sizeof(char) * ((size_t)ft_strlen(s) + 1))))
		return (NULL);
	ptr = (char *)s;
	ptr2 = new_str;
	while (*ptr)
		*(ptr2++) = f(*(ptr++));
	*ptr2 = '\0';
	return (new_str);
}
