/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:22:55 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:22:55 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// [fail]: your memccpy doesn't cast the memory into unsigned char
// [fail]: your memccpy doesn't cast the stop-character into unsigned char
// [fail]: your memccpy's return is false/doesn't work with basic params
// [fail]: your memccpy does not work with not found char
// [fail]: your memccpy does not work with basic params

void			*ft_memcpy(void *dst, void *src, size_t n)
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
			*d++ = *s++;
			n--;
		}
		return (dst);
	}
}
