// #include <criterion/criterion.h>
#include "../includes/libft.h"
#include <math.h>

Test(ft_putchar, no_out )
{
	// cr_assert(0, ft_putchar('w'));
}

/* The meat of the tests
contains:
size_t			ft_strlen
char			*ft_strcpy
char			*ft_strncpy
char			*ft_strcat
char			*ft_strncat
unsigned int	ft_strlcat
char			ft_strchr
char			ft_strrchr
char			*ft_strstr
char			ft_strnstr
int				ft_strcmp
int				ft_strncmp
int				ft_atoi
int				ft_isalpha
int				ft_isdigit
int				ft_isalnum
int				ft_isascii
int				ft_isprint
int				ft_toupper
int				ft_tolower
*/

Test(ft_strlen, numb)
{
	cr_assert_eq(ft_strlen("1234567"), strlen("1234567"));
	cr_assert_neq(ft_strlen("1234567"), strlen("91234567"));
}

Test(ft_strcpy, character)
{
	cr_assert_fail();
}

Test(ft_strncpy, character)
{
	cr_assert_fail();

}

Test(ft_strcat, character)
{
	cr_assert_fail();
}

Test(ft_strncat, character)
{
	cr_assert_fail();
}

Test(ft_strlcat, u_int)
{
	cr_assert_fail();
}

Test(ft_strchr, character)
{
	cr_assert_fail();
}

Test(ft_strrchr, character)
{
	cr_assert_fail();
}

Test(ft_strstr, character)
{
	cr_assert_fail();
}

Test(ft_strnstr, character)
{
	cr_assert_fail();
}

Test(ft_strcmp, character)
{
	cr_assert_eq(ft_strcmp("abcdef","abcdef"), strcmp("abcdef","abcdef"));
	cr_assert_neq(ft_strcmp("abcdef123","abcdef"), strcmp("abcdef","abcdef"));
}

Test(ft_strncmp, character)
{
	cr_assert_eq(ft_strncmp("what", "what", 2), ft_strncmp("yas", "yas", 2));
}

//The ctype section
#include <ctype.h>

Test(ft_atoi, numb)
{
	cr_assert_eq(ft_atoi("1234"), atoi("1234"));
	cr_assert_neq(ft_atoi("12340"), atoi("12341"));

	cr_assert_neq(ft_atoi("12340"), atoi("123asds41"));

	cr_assert_lt(ft_atoi("2147483647"), pow(2,31));
	cr_assert_eq(ft_atoi("2147483647"), pow(2,31) - 1);

	cr_assert_eq(ft_atoi("123423"), atoi("123423"));
}

Test(ft_isalpha, numb)
{
	cr_assert_eq(ft_isalpha("a"), isalpha("a"));
	cr_assert_neq(ft_isalpha("y"), isalpha('1'));

}
Test(ft_isdigit, numb)
{
	cr_assert_fail();

}
Test(ft_isalnum, numb)
{
	cr_assert_fail();

}
Test(ft_isascii, numb)
{
	cr_assert_fail();

}
Test(ft_isprint, numb)
{
	cr_assert_fail();

}
Test(ft_toupper, numb)
{
	cr_assert_fail();

}
Test(ft_tolower, numb)
{
	cr_assert_fail();

}


/* The memory section
contains functions
ft_memset
ft_bzero
ft_memcpy
ft_memccpy
ft_memmove
ft_memchr
ft_memcmp
*/
