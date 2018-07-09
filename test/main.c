#include <stdio.h>
#include <ctype.h> // use for tolower and the is* functions

int is_test(){
	printf("isalpha test\n");
	printf("1 is isalpha: %d\n", ft_isalpha('1'));
	printf("a is isalpha: %d\n", ft_isalpha('a'));
	printf("Z is isalpha: %d\n", ft_isalpha('Z'));
	printf("  is isalpha: %d\n", ft_isalpha(' '));
	printf("\t is isalpha: %d\n", ft_isalpha('\t'));

	printf("isalnum test\n");
	printf("1 is ialnum: %d\n", ft_isalnum('1'));
	printf("a is ialnum: %d\n", ft_isalnum('a'));
	printf("Z is ialnum: %d\n", ft_isalnum('Z'));
	printf("  is ialnum: %d\n", ft_isalnum(' '));
	printf("\t is ialnum: %d\n", ft_isalnum('\t'));

	printf("ft_isprint test\n");
	printf("1 is isprint: %d\n", ft_isprint('1'));
	printf("a is isprint: %d\n", ft_isprint('a'));
	printf("Z is isprint: %d\n", ft_isprint('Z'));
	printf("  is isprint: %d\n", ft_isprint(' '));
	printf("\t is isprint: %d\n", ft_isprint('\t'));

	printf("ft_isprint test\n");
	printf("1 is isascii: %d\n", ft_isascii('1'));
	printf("a is isascii: %d\n", ft_isascii('a'));
	printf("Z is isascii: %d\n", ft_isascii('Z'));
	printf("  is isascii: %d\n", ft_isascii(' '));
	printf("\t is isascii: %d\n", ft_isascii('\t'));

	printf("to lower and up stuff");
	putchar(ft_tolower('$'));
	putchar('\n');
	putchar(ft_toupper('a'));

	printf("Some other test \n");


	return 1;
}

int to_test(){

	return 1;
}

int		main()
{
	is_test();
	to_test();

	return 0;
}
