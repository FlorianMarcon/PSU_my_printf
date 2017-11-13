/*
** EPITECH PROJECT, 2017
** myprintf
** File description:
** printf
*/

#include "my.h"
#include <stdarg.h>
#include "header_MY_PRINTF.h"
#include <stdlib.h>

void	init_tab(tab_t *tab)
{
	tab[0].balise = 'c';
	tab[0].fptr = printChar;
	tab[1].balise = 's';
	tab[1].fptr = printStr;
	tab[2].balise = 'd';
	tab[2].fptr = printInt;
	tab[3].balise = 'i';
	tab[3].fptr = printInt;
	tab[4].balise = 'b';
	tab[4].fptr = printBinary;
	tab[5].balise = 'o';
	tab[5].fptr = printOct;
	tab[6].balise = 'x';
	tab[6].fptr = printHexa;
	tab[7].balise = 'X';
	tab[7].fptr = printHexa_maj;
	tab[8].balise = 'u';
	tab[8].fptr = printUnint;
	tab[11].balise = 'S';
	tab[11].fptr = print_S;
}

int	choice_function(tab_t *tab, va_list tmp, char balise, int size_now)
{
	int i = 0;
	int size;
	
	while(i != 12) {
		if (balise == tab[i].balise) {
			size = tab[i].fptr(tmp);
			return (size);
		}
		i++;
	}
	if (balise == 'n') {
		printLen(tmp, size_now);
		return (0);
	}
	if (balise == '%') {
		putchar('%');
		return (1);
	}
	return (0);
	
}

int	my_printf(char *str, ...)
{
	va_list tmp;
	tab_t *tab = malloc(sizeof(tab_t) * 12);
	int i = 0;
	int size_now = 0;
	
	if (tab == NULL)
		exit (84);
	init_tab(tab);
	va_start(tmp, str);
	while(str[i] != '\0') {
		if(str[i] == '%') {
			i++;
			size_now += choice_function(tab, tmp, str[i], size_now);
		}
		else {
			my_putchar(str[i]);
			size_now++;
		}
		i++;
	}
	va_end(tmp);
	return (0);
}
