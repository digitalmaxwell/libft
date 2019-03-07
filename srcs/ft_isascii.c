/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 08:47:39 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/15 08:49:52 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isascii(int c)
{
    if (c >= 0 && c <= 0177)
        return (1);
    return (0);
}