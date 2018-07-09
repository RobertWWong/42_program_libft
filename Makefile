NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ofast -I ./includes/ 

SRC := $(wildcard ./*.c) $(wildcard ./includes/*.c)
OBJ := $(SRC:.c=.o)
# SRC = ./ft_putchar.c ./ft_putstr.c
# OBJ = $(patsubst %.c,%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

oclean:
	/bin/rm -f *.o

re: fclean all

R_test: 
	gcc ./test/main.c -L. -L ./includes -lft -o run_test 
	./run_test