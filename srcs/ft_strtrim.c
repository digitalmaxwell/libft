/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:31:26 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/19 18:31:27 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strtrim(char const *s)
{
    // char *trimmed;
    // size_t sLen;

    // if (!s)
    //     return (NULL);

    // trimmed = (char *)s;
    // sLen = ft_strlen(trimmed);

    // while (ft_iswhitespace(*trimmed))
    //     trimmed++;
    // while (sLen && ft_iswhitespace(trimmed[sLen - 1]))
    //     sLen--;

    // trimmed = ft_strsub(trimmed, 0, sLen);

    // return (trimmed);

	char	*result;
	size_t	i;
	size_t	start;
	size_t	finish;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	finish = ft_strlen(s);
	while (ft_iswhitespace(s[start]) || s[start] == '\n')
		start++;
	while (finish && (ft_iswhitespace(s[finish - 1]) || s[finish - 1] == '\n'))
		finish--;
	if ((result = ft_strnew((finish > start) ? (finish - start) : 0))) //??
	{
		while (start < finish)
			result[i++] = s[start++];
		result[i] = '\0';
	}
	return (result);
}

// int     main()
// {
//     char const trim[] = "       trim me         ";
//     printf("%s", ft_strtrim(trim));
//     return (0);
// }