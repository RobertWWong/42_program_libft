/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:30:23 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:30:25 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// [fail]: your strnstr does not work with basic input

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	size_t	find_len;

	find_len = ft_strnlen(to_find, len);
	if (0 == (find_len))
		return (char*)str;
	i = -1;
	while (i++ < (int)(len - find_len))
	{
		if ((*str == *to_find) && (0 == ft_strncmp(str, to_find, find_len)))
			return (char *)str;
		str++;
	}
	return (NULL);
}
