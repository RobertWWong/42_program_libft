/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:12:56 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:12:58 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s)
{
	unsigned int i;
	if (!s)
		return ;
	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
}
