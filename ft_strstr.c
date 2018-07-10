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
	int i;

	if (!*to_find && !*str)
		return ((char *)str);
	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i])
			i++;
		if (!to_find[i])
			return ((char *)str);
		str++;
	}
	return (NULL);
}
