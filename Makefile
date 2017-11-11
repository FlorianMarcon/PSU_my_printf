##
## EPITECH PROJECT, 2017
## Makefile pour compresser lib
## File description:
## 
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

all:		$(OBJ)
	ar rc libmy.a $(OBJ)
	make -C ./lib/my
	rm *.o

clean:
	rm -f *.o
	rm -f *~
	rm -f *#
