/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:47:56 by rowong            #+#    #+#             */
/*   Updated: 2018/07/11 14:47:58 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../includes/libft.h"

static int is_test(){
	printf("isalpha test\n");
	printf("1 is isalpha: %d\n", ft_isalpha('1'));
	printf("a is isalpha: %d\n", ft_isalpha('a'));
	printf("Z is isalpha: %d\n", ft_isalpha('Z'));
	printf("  is isalpha: %d\n", ft_isalpha(' '));
	printf("\t is isalpha: %d\n", ft_isalpha('\t'));
	printf("\nisalnum test\n");
	printf("1 is ialnum: %d\n", ft_isalnum('1'));
	printf("a is ialnum: %d\n", ft_isalnum('a'));
	printf("Z is ialnum: %d\n", ft_isalnum('Z'));
	printf("  is ialnum: %d\n", ft_isalnum(' '));
	printf("\t is ialnum: %d\n", ft_isalnum('\t'));
	printf("\nft_isprint test\n");
	printf("1 is isprint: %d\n", ft_isprint('1'));
	printf("a is isprint: %d\n", ft_isprint('a'));
	printf("Z is isprint: %d\n", ft_isprint('Z'));
	printf("  is isprint: %d\n", ft_isprint(' '));
	printf("\t is isprint: %d\n", ft_isprint('\t'));
	printf("\nft_isprint test\n");
	printf("1 is isascii: %d\n", ft_isascii('1'));
	printf("a is isascii: %d\n", ft_isascii('a'));
	printf("Z is isascii: %d\n", ft_isascii('Z'));
	printf("  is isascii: %d\n", ft_isascii(' '));
	printf("\t is isascii: %d\n", ft_isascii('\t'));
	printf("\nto lower and up stuff");
	putchar(ft_tolower('$'));
	putchar('\n');
	putchar(ft_toupper('a'));
	printf("\nSome other test \n");
	return 1;
}

static int to_test(){
	return 1;
}

static int str_test(){
	char *w1 = "what is up peeps";
	char *w2 = "up";
	printf("Let's test strstr of %s vs %s\n",strstr(w1, w2), ft_strstr(w1, w2) );
	printf("Testing Strnstr at 9 len now of %s vs %s\n",strnstr(w1, w2, 9), ft_strnstr(w1, w2, 4) );
	printf("Testing Strnstr at 10 len now of %s vs %s\n",strnstr(w1, w2, 10), ft_strnstr(w1, w2, 10) );
	char *src = "/|\x12\xff\x09\0\x42\042\0\42|\\";
	int size = 12;
	printf("is my memchr working? %d\n", memchr(src, '\0', size) == ft_memchr(src, '\0', size));
	char SRC[] = "test basic du memccpy !";
	char buff1[22];
	char *r1 = memccpy(buff1, SRC, 'm', 22);
	char *r2 = ft_memccpy(buff1, SRC, 'm', 22);
	printf("time for memccpy edge case stuff  %d\n", r1 == r2);
	printf("what is this : (%s) vs (%s)\n", r1, r2);
	return 1;
}

static int mem_test()
{
	char n[40] = "99999999999999999999999999";
    int a1 = atoi(n);
    int a2 = ft_atoi(n);
	printf("Individual dif of ori and mine:  %d vs %d\n", a1,a2);
	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2 = "\xff\xaa\xde\x02";
    size_t size = 8;
	int i1 = memcmp(s1, s2, size);
	int i2 = ft_memcmp(s1, s2, size);
	printf("Here's my diif %d\n",(i1 == i2));
	printf("Individual dif of ori and mine:  %d vs %d\n", i1,i2);
	return 1;
}

static int p2_str_test()
{
	
	return 1;
}
int		main()
{
	// is_test();
	// to_test();
	// str_test();
	// mem_test();


	return 0;
}
