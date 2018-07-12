/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:46:32 by rowong            #+#    #+#             */
/*   Updated: 2018/07/11 16:46:32 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*mover;
	unsigned int	idx;

	mover = s;
	idx = 0;
	while (*mover)
	{
		f(idx++, mover);
		mover++;
	}
}
