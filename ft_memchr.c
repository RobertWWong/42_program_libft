/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:22:28 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:22:29 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// [fail]: your memchr does not cast in unsigned the memory		[x]
// [fail]: your memchr failed to find a \0

void			*ft_memchr(void *s, int c, size_t n)
{
	unsigned char *first;

	first = (unsigned char*)s;
	while (*first && n--)
	{
		if (*first == (unsigned char)c)
			return (first);
		first++;
	}
	return (NULL);
}
