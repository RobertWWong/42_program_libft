/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:46:32 by rowong            #+#    #+#             */
/*   Updated: 2018/07/11 16:46:32 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*res;
	int		tmp;

	// res = (char*)malloc(sizeof(char) * 11 + 1);
	res = ft_strnew(12);
	sign = 1;
	i = 0;
	if ((sign = n) < 0)
		if ((n = -n) >0)
			sign = -1 * ++i;
	printf("%d\n", i);
	while(n > 0)
	{
		*res++ = n % 10 + '0' + (i++ * 0);
		n /= 10;
	}
	printf("%d\n", sign);
	if (!sign)
		*res++ = '-';
	*res = '\0';
	sign = 0;
	printf("%s\n", res);
	while (i > sign)
	{
		tmp = *(res - sign);
		printf("i = %d  and sign %d	\n", i, sign );
		printf("The itoa = %s\n", (res - i - sign));
		printf("num exchanged : %c vs %c\n\n", *(res - sign) , *(res - i + 1));
		*(res - sign++) = *(res - i + 1);
		*(res - i-- + 1) = tmp;
	}
	res = (res - i - sign + 1);
	return (res);
}
