/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:24:56 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:24:58 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// [fail]: your strcmp does not cast in unsigned the diff	[?]
// [fail]: your strcmp does not work with non ascii chars

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}