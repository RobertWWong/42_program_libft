/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:37:56 by rowong            #+#    #+#             */
/*   Updated: 2018/07/14 13:37:57 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char delimit)
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

int	next_pos(char *str, int pos, char delimit)
{
	while (str[pos] == delimit)
		pos++;
	return (pos);
}

int	word_len(char *str, int pos, char delimt)
{
	int len;

	len = 0;
	while (!(str[pos + len] == delimt || str[pos + len] == '\0'))
		len++;
	return (len);
}

static	int	copy_word(char **res, char *str, t_coord *pos, char delimit)
{
	int wlen;
	int next_p;
	int i;

	next_p = next_pos(str, pos->cur_pos, delimit);
	wlen = word_len(str, next_p, delimit);
	if (!(res[pos->cur_pos] = malloc(sizeof(char*) * (wlen + 1))))
		return (-1);
	i = 0;
	while (i < wlen)
	{
		res[pos->cur_pos][i] = str[next_p + i];
		i++;
	}
	res[pos->cur_pos][i] = '\0';
	return (next_p + wlen);
}
char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		total_words;
	t_coord	*pos;

	pos = malloc(sizeof(pos) * 1);
	pos->cur_pos = 0;
	pos->next_pos = 0;
	total_words = word_count(s, c);
	if (!(res = malloc(sizeof(char*) * (total_words + 1))))
		return (NULL);
	while (pos->cur_pos < total_words)
	{
		pos->next_pos = copy_word(res, (char*)s, pos, c);
		if (pos->next_pos == -1)
		{
			free(pos);
			return (NULL);
		}
		pos->cur_pos = pos->cur_pos + 1;
	}
	res[pos->cur_pos] = NULL;
	free(pos);
	return (res);
}
