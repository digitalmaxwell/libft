#include "../libft.h"

int     ft_iswhitespace(char c)
{
    if (c == ' ' || c == '\n' || c == '\t')
        return (1);
    return (0);
}