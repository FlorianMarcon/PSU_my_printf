##
## EPITECH PROJECT, 2017
## makefile
## File description:
## test unitare
##

DIR_SRC_UT	=	my_printf

SRC_UT	=	$(DIR_SRC_UT)/test_utils.c \
		printInt/test_utils.c		\
		printInt2/test_utils.c		\
		print_S/test_utils.c		\
		printBinary/test_utils.c	\
		printHexa/test_utils.c		\
		printHexa_maj/test_utils.c	\

DIR_SRC	=	../src_printf

SRC	=	$(DIR_SRC)/my_printf.c		\
		$(DIR_SRC)/choice_function.c	\
		$(DIR_SRC)/functions.c		\
		$(DIR_SRC)/print_speci.c	\
		$(DIR_SRC)/speci.c		\

OBJ	= 	$(SRC:.c=.o) $(SRC_UT:.c=.o)

NAME	=	units

LDFLAGS	=	-lcriterion

CFLAGS	=	-W -Wall -Wextra -Werror -I./../include

all:		$(OBJ)
	make -C ../
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) -L./../lib/my -lmy

clean:
	rm -f $(OBJ)

fclean: rm -f $(NAME)
	rm -f $(DIR_SRC)/*.o
	rm -f $(DIR_SRC_UT)/*.o
	rm -f $(DIR_SRC)/*#
	rm -f $(DIR_SRC_UT)/*#
	rm -f $(DIR_SRC)/*~
	rm -f $(DIR_SRC_UT)/*~

re: all clean
