#include "libft.h"

int ft_isprint(char *str)
{
	while (*str)
		if ((*str >= ' ' && *str < '~'))
			str++;
		else
			return (0);
	return (1);
}
