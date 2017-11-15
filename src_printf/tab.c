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
	tab[10].balise = 'p';
	tab[10].fptr = printAdresse;
	tab[11].balise = 'S';
	tab[11].fptr = print_S;
}

void	init_tab_speci(specifier_t *tab)
{
	tab[0].balise = ".";
	tab[0].size = 1;
	tab[1].balise = "+";
	tab[1].size = 1;
	tab[2].balise = " ";
	tab[2].size = 1;
	tab[3].balise = "#";
	tab[3].size = 1;
}
