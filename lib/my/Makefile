##
## EPITECH PROJECT, 2017
## Makefile pour compresser lib
## File description:
##
##

SRC	=	$(wildcard *.c)		\
		src_printf/printInt/printInt_speci.c	\
		src_printf/printOct/printOct_speci.c	\
		src_printf/my_printf.c	\
		src_printf/choice_function.c	\
		src_printf/functions.c		\
		src_printf/functions2.c		\
		src_printf/functions3.c		\
		src_printf/print_speci.c	\
		src_printf/speci.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include

all:		$(OBJ)
	ar rc libmy.a $(OBJ)
	rm *.o

clean:
	rm -f *.o
	rm -f *~
	rm -f *#
	rm -f src_printf/*.o
	rm -f src_printf/*~
	rm -f src_printf/*#

fclean: clean
	rm -f libmy.a
	make fclean -C ./lib/my/
