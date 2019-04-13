/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:22:00 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 14:22:01 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *subStr;

	if (!s)
		return (NULL);

    subStr = malloc(sizeof(char) * len + 1);

	if (!subStr)
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(subStr, s, len);
	subStr[len] = '\0';
    return (subStr);
}
