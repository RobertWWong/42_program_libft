#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	// // int dummy;
	// if(c){
	// 	 write(1, &c, 1);
	// 	 return;
	//	// dummy = write(1, &c, 1);
	// }
	// (void ) dummy;

	//If you desire optimization during compilation...
	if (write(1, &c, 1))
	{}
}