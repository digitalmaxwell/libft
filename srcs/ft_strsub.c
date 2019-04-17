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
	char *sub_str;

	if (!s)
		return (NULL);
	sub_str = malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(sub_str, s, len);
	sub_str[len] = '\0';
	return (sub_str);
}
