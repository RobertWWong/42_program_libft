/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:06:24 by rowong            #+#    #+#             */
/*   Updated: 2018/07/10 10:06:26 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *str, size_t len)
{
	size_t idx;

	idx = 0;
	while (str[idx] != 0 && len)
	{
		idx++;
		len--;
	}
	return (idx);
}