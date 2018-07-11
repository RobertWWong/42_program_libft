files = '''ft_strclr ft_strdel ft_strequ ft_strnequ ft_striter ft_striteri ft_strnequ ft_strma ft_strmap ft_strne ft_strspli ft_strnequ ft_strtri ft_ito ft_putchar ft_putstr ft_putchar_fd ft_putstr_fd ft_putnbr ft_putnbr_fd ft_putstr_fd ft_putendl ft_putendl_fd ft_memalloc ft_memdel'''

fname = files.split()

print(fname)

from subprocess import call
import os

# automate_header = '''vim -c "Stdheader" +":$ | :put!='#include "libft.h"'" -c "x"  ./includes/{}.c'''.format(fname[0])
# print(automate_header.split())

for f in fname:
	automate_header = '''vim -c "Stdheader" +":$ | :put!='#include "libft.h"'" -c "wq"  ./includes/{}.c'''.format(f)
	# print(automate_header.split())
	os.system(automate_header)
	# call(automate_header.split())
