/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:08:49 by rowong            #+#    #+#             */
/*   Updated: 2018/07/13 12:08:50 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_reverse(char *str, int front, int back)
{
	int		tmp;

	while (front > back)
	{
		tmp = *(str - back);
		*(str - back++) = *(str - front + 1);
		*(str - front-- + 1) = tmp;
	}
	return (str - front - back + 1);
}

char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*res;

	if ((i = 0) || n == -2147483648)
		return ("-2147483648");
	res = ft_strnew(12);
	if ((sign = n) < 0)
		if ((n = -n) > 0)
			sign = -1 * ++i;
	while (n > 0)
	{
		*res++ = n % 10 + '0' + (i++ * 0);
		n /= 10;
	}
	if (sign == -1 || (sign = 0))
		*res++ = '-';
	*res-- = '\0';
	res = ft_reverse(res, i, sign);
	return (res);
}
