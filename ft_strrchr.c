/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:31:19 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:31:22 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// [fail]: your strrchr does not work with \0

char	*ft_strrchr(const char *s, int c)
{
	char *p;
	char *last;

	p =(char *) s;
	last = NULL;
	while (*p)
	{
		if (*p == c)
			last = p;
		p++;
	}
	return (last);
}
