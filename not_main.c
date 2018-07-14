#include <stdio.h>
#include "includes/libft.h"


int main()
{
	char **ans_arr;
	char *str = "hello darness my old friend. I've come for you again";
	// size_t  arr_len = word_count(str, ' ');
	ans_arr = ft_strsplit(str, ' ');

	printf("we have words = %u\n", 2);
	for (int i = 0; ans_arr[i]; i++) {
		printf("%s\n", ans_arr[i]);
	}

}
