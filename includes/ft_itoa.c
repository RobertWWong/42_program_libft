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

static int	find_len(int n, int sign)
{
	int len;

	len = 0;
	if (sign < 0)
		len++;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
// static char	*reverse(char *str, int front, int back)
// {
// 	int		tmp;
//
// 	while (front > back)
// 	{
// 		tmp = *(str - back);
// 		*(str - back++) = *(str - front + 1);
// 		*(str - front-- + 1) = tmp;
// 	}
// 	return (str - front - back + 1);
// }

static void		strrev(char *str)
{
	int i;
	int tmp;
	int len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len--] = str[i++];
	}
}

char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*res;

	if (n == 0)
		return ("0\0");
	if ((i = 0) || n == -2147483648)
		return (ft_strdup("-2147483648"));
	if ((sign = n) < 0)
		if ((n = -n) > 0)
			sign = -1 * ++i;
	if (!(res = ft_strnew(find_len(n, sign) + 1)))
		return (NULL);
	while (n > 0)
	{
		*res++ = n % 10 + '0' + (i++ * 0);
		n /= 10;
	}
	if (sign == -1 || (sign = 0))
		*res++ = '-';
	*res-- = '\0';
	strrev((res - i - sign));
	return (res);
}
