/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:22:13 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:22:13 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void * dst, void *src, int c, size_t n)
{
	char	*d;
	char	*s;

	if (n == 0 || dst == src)
		return (dst);
	else
	{
		d = dst;
		s = src;
		while (n)
		{
			if (*s == (unsigned char)c)
				return (++src);
			*d++ = *s++;
			n--;
		}
		return (dst);
	}
}
