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

static	int	word_count(char const *s, char delimit)
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

static	int	next_pos(char *str, int pos, char delimit)
{
	while (str[pos] == delimit)
		pos++;
	return (pos);
}

static	int	word_len(char *str, int pos, char delimt)
{
	int len;

	len = 0;
	while (!(str[pos + len] == delimt || str[pos + len] == '\0'))
		len++;
	return (len);
}

static	int	copy_word(char **res, int ptrn, char *str, int pos, char delimit)
{
	int wlen;
	int next_p;
	int i;

	next_p = next_pos(str, pos, delimit);
	wlen = word_len(str, next_p, delimit);
	res[ptrn] = (char *)malloc(sizeof(char*) * (wlen + 1));
	i = 0;
	while (i < wlen)
	{
		res[ptrn][i] = str[next_p + i];
		i++;
	}
	res[ptrn][i] = '\0';
	return (next_p + wlen);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		position;
	int		i;
	int		total_words;

	i = 0;
	position = 0;
	total_words = word_count(s, c);
	if (!(res = (char **)malloc(sizeof(char*) * (total_words + 1))))
		return (NULL);
	while (i < total_words)
	{
		position = copy_word(res, i, (char*)s, position, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
