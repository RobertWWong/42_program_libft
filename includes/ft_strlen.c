#include "libft.h"

size_t		ft_strlen(char *str)
{
	size_t idx;

	idx = 0;
	while (str[idx] != 0)
		idx++;
	return (idx);
}
