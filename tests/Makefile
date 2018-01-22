##
## EPITECH PROJECT, 2017
## Makefile pour compresser lib
## File description:
## test
##

CC	=	gcc

WAY	=	../src_printf

WAY_OTHER	=	$(WAY)/other_src

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

SRC_UT	=	print_hexa/tests_utils.c	\
		my_printf/tests_utils.c		\
		print_s/tests_utils.c	\

OBJ	=	$(SRC:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

CFLAGS	=	-I../include -g3 -W -Wall -Wextra -Werror --coverage

LDFLAGS	=	-lcriterion -lgcov

NAME	=	units

all:	$(OBJ) $(OBJ_UT)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_UT) $(LDFLAGS)
	./$(NAME)

clean:
	rm -f $(OBJ)
	rm -f $(SRC:.c=.gcno)
	rm -f $(SRC:.c=.gcda)
	rm -f $(SRC_UT:.c=.gcno)
	rm -f $(SRC_UT:.c=.gcda)

fclean:	clean
	rm -f $(NAME)
