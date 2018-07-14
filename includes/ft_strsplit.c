/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:46:32 by rowong            #+#    #+#             */
/*   Updated: 2018/07/11 16:46:32 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s, char delimit)
{
	int words;
    int start_del;
    int ctr;

    ctr = 0;
    start_del = 1;
    words = 0;
    if (!s || !delimit)
        return (0);
    while (s[ctr])
    {
        if (s[ctr] != delimit && start_del && s[ctr])
        {
            start_del = 0;
            words += 1;
        }
        else if (s[ctr] == delimit)
            start_del = 1;
        ctr++;

    }
    return (words);
}

char		**ft_strsplit(char const *s, char c)
{
	char		*ptr;

}
