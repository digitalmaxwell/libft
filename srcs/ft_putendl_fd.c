/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:15:16 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/20 13:15:17 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
    ft_putstr_fd(s, fd);
    ft_putchar('\n');
}