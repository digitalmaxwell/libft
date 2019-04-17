/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:18:54 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 15:18:57 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	size_t	s3_len;

	if (!s1 || !s2)
		return (NULL);
	s3_len = (ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	s3 = malloc(sizeof(char) * (s3_len + 1));
	if (!s3)
		return (NULL);
	while (*s1)
	{
		s3[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		s3[i] = *s2;
		s2++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
