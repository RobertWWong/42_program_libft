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

void			*ft_memccpy(void * dst, const void *src, int c, size_t n)
{
	void *p;

	p = ft_memchr(src, c, n);
	if (p != NULL)
		return (ft_memcpy(dst, src, p - src + 1));
	ft_memcpy(dst, src, n);
	return (NULL);
}
