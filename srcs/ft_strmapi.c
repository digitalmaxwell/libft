/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:53:19 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 12:53:20 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *ptr;
	char *ptr2;
	char *new_str;

	if (!s || !(new_str = malloc(sizeof(char) * ((size_t)ft_strlen(s) + 1))))
		return (NULL);

	i = 0;
	ptr = (char *)s;
	ptr2 = new_str;

	while (*ptr)
		*(ptr2++) = f(i++, *(ptr++));
	*ptr2 = '\0';
	return (new_str);
}
