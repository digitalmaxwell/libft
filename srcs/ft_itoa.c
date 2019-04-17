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

static int		get_str_len(int n)
{
	int i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

static char		*convert(char *a, int len, int sign, int n)
{
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

char			*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*a;

	sign = 1;
	len = get_str_len(n);
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
	return (convert(a, len, sign, n));
}
