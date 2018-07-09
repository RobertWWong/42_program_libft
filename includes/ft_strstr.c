#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	char	*substr;
	char	*origin;

	while (*str != '\0')
	{
		origin = str;
		substr = to_find;
		while (*str && *substr && *str == *substr)
		{
			str++;
			substr++;
		}
		if (!*substr)
			return (origin);
		str = origin + 1;
	}
	return (0);
}
