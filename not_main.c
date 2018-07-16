// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
//
// typedef struct		s_coord
// {
// 	int				cur_pos;
// 	int				next_pos;
// 	int             cur_idx;
// }					t_coord;
//
// int	word_count(char const *s, char delimit)
// {
// 	int words;
// 	int start_del;
// 	int ctr;
//
// 	ctr = 0;
// 	start_del = 1;
// 	words = 0;
// 	if (!s || !delimit)
// 		return (0);
// 	while (s[ctr])
// 	{
// 		if (s[ctr] != delimit && start_del && s[ctr])
// 		{
// 			start_del = 0;
// 			words += 1;
// 		}
// 		else if (s[ctr] == delimit)
// 			start_del = 1;
// 		ctr++;
// 	}
// 	return (words);
// }
//
// int	word_len(char *str, int pos, char delimit)
// {
//     int org_pos;
//
//     org_pos = pos;
// 	while (str[pos] != delimit)
// 		pos++;
// 	return (pos - org_pos);
// }
//
// int	next_pos(char *str, int pos, char delimt)
// {
// 	int len;
//
// 	len = 0;
// 	printf("Here is our string start :%s\n",(str + pos) );
// 	printf("what is false? %d : %d\n", str[pos + len] == delimt , str[pos + len]);
// 	while ((str[pos + len] == delimt && str[pos + len] ))
// 		len++;
// 	return (pos + len);
// }
//
// static	int	copy_word(char **res, char *str, t_coord *pos, char delimit)
// {
// 	int wlen;
// 	int next_p;
// 	int i;
// 	wlen = word_len(str, pos->cur_pos, delimit);
// 	printf("what is our wlen?  %d\n", wlen);
//
// 	next_p = next_pos(str, pos->next_pos + wlen, delimit);
// 	printf("%d is the diff that the ptr found \n", next_p);
// 	printf("%d is our next_pos val\n", pos->next_pos);
//
// 	pos->next_pos = next_p;
// 	if (!(res[pos->cur_idx] = malloc(sizeof(char*) * (wlen + 1))))
// 		return (-1);
// 	i = 0;
// 	printf("where are we at? %s & %s\n", res[pos->cur_idx] , (str + pos->cur_pos));
// 	printf("where is cur_pos? %d\n#######char out = ", pos->cur_pos);
// 	while (i < wlen)
// 	{
// 		res[pos->cur_idx][i] = str[pos->cur_pos + i];
// 		printf("%c",str[pos->cur_pos + i] );
// 		i++;
// 	}
// 	res[pos->cur_idx][i] = '\0';
// 	printf("#######\nEnd of it %s\n", res[pos->cur_idx]);
//
// 	pos->cur_idx++;
// 	pos->cur_pos = pos->next_pos;
// 	printf("what is our next ptr  %d\n\n", pos->next_pos);
// 	return (1);
// }
// char		**ft_strsplit(char const *s, char c)
// {
// 	char	**res;
// 	int		total_words;
// 	t_coord	*pos;
// 	int     i;
//
//     i = 0;
// 	pos = malloc(sizeof(pos) * 1);
// 	pos->cur_pos = 0;
// 	pos->next_pos = 0;
// 	pos->cur_idx = 0;
// 	total_words = word_count(s, c);
// 	if (!(res = malloc(sizeof(char*) * (total_words + 1))))
// 		return (NULL);
// 	while (i < total_words)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		copy_word(res, (char*)s, pos, c);
// 		if (pos->next_pos == -1)
// 		{
// 			free(pos);
// 			return (NULL);
// 		}
// 		i++;
// 	}
// 	res[pos->cur_idx] = NULL;
// 	free(pos);
// 	return (res);
// }
//
// int main()
// {
// 	char **ans_arr;
// 	char *str = "             again";
// 	// size_t  arr_len = word_count(str, ' ');
// 	ans_arr = ft_strsplit(str, ' ');
//
// 	printf("we have words = %u\n", 2);
// 	for (size_t i = 0; i < 1; i++) {
// 		printf("%s\n", ans_arr[i]);
// 	}
//
// }
