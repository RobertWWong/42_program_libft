#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *tmp;

	tmp = dest;
	while (n > 0 && *src != '\0')
	{
		*tmp++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*tmp++ = '\0';
		--n;
	}
	return (dest);
}
