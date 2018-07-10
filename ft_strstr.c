/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:31:32 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:31:34 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
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
