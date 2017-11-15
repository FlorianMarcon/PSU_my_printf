##
## EPITECH PROJECT, 2017
## Makefile pour compresser lib
## File description:
## 
##

SRC	=	$(wildcard *.c)		\
		src_printf/my_printf.c	\
		src_printf/choice_function.c	\
		src_printf/functions.c		\
		src_printf/print_speci.c	\
		src_printf/speci.c		\
		src_printf/tab.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include

all:		$(OBJ)
	ar rc libmy.a $(OBJ)
	make -C ./lib/my
	rm *.o

clean:
	rm -f *.o
	rm -f *~
	rm -f *#

fclean: clean
	rm -f libmy.a
