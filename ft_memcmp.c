/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:22:35 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:22:36 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// [fail]: your memcmp does not work with basic input
// [fail]: your memcmp does not work with basic input
// [fail]: your memcmp does not cast the memory in unsigned char
// [fail]: your memcmp stop at \0
// [fail]: your memcmp does not work with basic input

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	while(n--)
		if (*p1 != *p2)
			return ((int)(*p1 - *p2));
	return (0);
}
