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

static	int	word_len(char *str, int pos, char delimit)
{
    int org_pos;

    org_pos = pos;
	while (str[pos] != delimit)
		pos++;
	return (pos - org_pos);
}

static	int	next_pos(char *str, int pos, char delimt)
{
	int len;

	len = 0;
	while ((str[pos + len] == delimt && str[pos + len] ))
		len++;
	return (pos + len);
}

static	int	copy_word(char **res, char *str, t_coord *pos, char delimit)
{
	int wlen;
	int next_p;
	int i;
	wlen = word_len(str, pos->cur_pos, delimit);
	next_p = next_pos(str, pos->next_pos + wlen, delimit);
	pos->next_pos = next_p;
	if (!(res[pos->cur_idx] = malloc(sizeof(char*) * (wlen + 1))))
		return (-1);
	i = 0;
	while (i < wlen)
	{
		res[pos->cur_idx][i] = str[pos->cur_pos + i];
		i++;
	}
	res[pos->cur_idx][i] = '\0';
	pos->cur_idx++;
	pos->cur_pos = pos->next_pos;
	return (1);
}
char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		total_words;
	t_coord	*pos;
	int     i;

    i = -1;
	pos = malloc(sizeof(pos) * 1);
	pos->cur_pos = 0;
	pos->next_pos = 0;
	pos->cur_idx = 0;
	total_words = word_count(s, c);
	if (!(res = malloc(sizeof(char*) * (total_words + 1))))
		return (NULL);
	while (++i < total_words)
	{
		while (*s == c && *s)
			s++;
		copy_word(res, (char*)s, pos, c);
		if (pos->next_pos == -1)
		{
			free(pos);
			free(res);
			return (NULL);
		}
	}
	free(pos);
	res[pos->cur_idx] = NULL;
	return (res);
}
