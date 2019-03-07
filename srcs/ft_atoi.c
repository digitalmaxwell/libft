/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:38:41 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/14 18:38:44 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int     ft_atoi(const char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;

    while (*str == ' ' || *str == '\n' || *str == '\t'
        || *str == '\r' || *str == '\v' || *str == '\f')
        str++;
    if (*str == '+')
        str++;
    if (*str == '-')
        sign = -1;
    while (*str >= '0' && *str <= '9')
    {
        result = (result * 10) + (*str - '0');
        str++;
    }

    return (result * sign);
}

// int     main()
// {
//     char test[] = "42";
//     printf("%i", ft_atoi(test));
//     return (0);
// }