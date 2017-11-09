##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	src_printf/flags_printf.c	\
		src_printf/my_printf.c		\
		src_printf/main.c		\


OBJ	=	$(SRC:.c=.o)

NAME	=	my_printf

CFLAGS	=	-W -Wall -Wextra -Werror -I./include

all:		$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f *#

fclean:		clean
		rm -f $(NAME)

re:	fclean all
