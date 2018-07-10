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

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char	*substr;
	char	*origin;

	while (*str != '\0' && len)
	{
		origin = str;
		substr = to_find;
		while (*str && *substr && *str == *substr && len--)
		{
			str++;
			substr++;
		}
		if (!*substr && len >= 0)
			return (origin);
		str = origin + 1;
		len--;
	}
	return (0);
}
