##
## EPITECH PROJECT, 2022
## B-CPE-110-PAR-1-2-BSQ-luca.martinet
## File description:
## Makefile
##

CC 	= 	gcc

SRC 	=		src/main.c								\
				src/array.c								\
				src/counters.c							\
				src/open_file.c							\
				src/array_int.c							\
				src/array_num_char.c					\
				src/remove_first_line.c					\
				src/algo.c 								\
				src/print_square.c						\
				src/generate_map.c						\
				src/error_handling.c					\
				lib/my/my_printf/my_printf.c			\
				lib/my/my_put_nbr.c						\
				lib/my/my_putchar.c						\
				lib/my/my_putstr.c						\
				lib/my/my_revstr.c						\
				lib/my/my_strlen.c						\
				lib/my/my_printf/flags/int_to_oct.c		\
				lib/my/my_printf/flags/int_to_bin.c		\
				lib/my/my_printf/flags/my_put_u.c		\
				lib/my/my_getnbr.c						\
				lib/my/my_printf/flags/my_put_x_lower.c \
				lib/my/my_printf/flags/my_put_x_upper.c

OBJ     = 		$(SRC:.c=.o)

NAME	=		 bsq

CFLAGS 	=	-W -Wall -Wextra -pedantic -g3

all:	$(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		rm -f generated_map.txt

re: fclean all
