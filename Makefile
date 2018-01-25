##
## EPITECH PROJECT, 2017
## Makefile pour compresser lib
## File description:
##
##

CC	=	gcc

WAY	=	src_printf

WAY_OTHER	=	src_printf/other_src

SRC	=	$(WAY)/print_int/print_int_speci.c	\
		$(WAY)/print_oct/print_oct_speci.c	\
		$(WAY)/print_hexa/print_hexa_speci.c	\
		$(WAY)/print_unint/print_unint_speci.c	\
		$(WAY)/my_printf.c	\
		$(WAY)/choice_function.c	\
		$(WAY)/functions_printfirst.c		\
		$(WAY)/functions_printsecond.c		\
		$(WAY)/functions_printthird.c		\
		$(WAY)/print_speci.c	\
		$(WAY)/find_speci.c		\
		$(WAY_OTHER)/conv_base_to.c	\
		$(WAY_OTHER)/convert_base.c	\
		$(WAY_OTHER)/lenint.c		\
		$(WAY_OTHER)/my_getnbr.c	\
		$(WAY_OTHER)/my_put_unnbr.c	\
		$(WAY_OTHER)/my_putchar.c	\
		$(WAY_OTHER)/my_putstr.c	\
		$(WAY_OTHER)/my_strlen.c	\
		$(WAY_OTHER)/my_strlowcase.c	\
		$(WAY_OTHER)/stock_int_in_str.c	\
		$(WAY_OTHER)/my_put_nbr.c	\
		$(WAY_OTHER)/my_strdup.c	\
		$(WAY_OTHER)/my_revstr.c	\
		$(WAY_OTHER)/my_strncpy.c	\
		$(WAY_OTHER)/len_unint.c	\
		$(WAY_OTHER)/my_compute_power_rec.c	\
		$(WAY_OTHER)/convert_baseten_to_n.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I./include -g3

all:	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	make clean -C./tests
	rm -f $(OBJ)

fclean: clean
	make fclean -C./tests
	rm -f libmy.a

re:	clean all

tests_run:
	make -C./tests
