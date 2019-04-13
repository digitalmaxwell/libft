/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:03:24 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/20 11:03:27 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	getStrLen(int n)
{
	int i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int i;
	int sign;
	int len;
	char *a;

	i = 0;
	sign = 1;
	len = getStrLen(n);

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));

	if (n < 0)
	{
		sign = -1;
		len++;
		n *= sign;
	}

	a = malloc(sizeof(char) * len + 1);
	if (!a)
		return (NULL);

	a[len] = '\0';

	while (len--)
	{
		if (len == 0 && sign < 0)
			a[len] = '-';
		else
		{
			a[len] = (n % 10) + '0';
			n = n / 10;
		}
	}

	return (a);
}
