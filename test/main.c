#include <stdio.h>

int ft_is_test(){
	printf("1 is ialnum: %d\n", ft_isalnum('1'));
	printf("a is ialnum: %d\n", ft_isalnum('a'));
	printf("Z is ialnum: %d\n", ft_isalnum('Z'));
	printf("  is ialnum: %d\n", ft_isalnum(' '));
	printf("\t is ialnum: %d\n", ft_isalnum('\t'));

	return 1;
}

int		main()
{
	ft_putchar('y');
	ft_putchar('a');
	ft_putchar('s');
	ft_putchar('\n');

	ft_putstr("what the heck?\n");

	ft_is_test();
	return 0;
}
