/*
** EPITECH PROJECT, 2017
** header my_printf
** File description:
**
*/
#include <stdarg.h>

#ifndef MY_PRINTF_
#define MY_PRINTF_

int    my_printf(char *str, ...);

//int	flags_printf(char cara, va_list tmp, int size_now);

typedef struct tab {
        char balise;
        int (*fptr)(va_list);
} tab_t;

void	init_tab(tab_t *tab);

int	choice_function(tab_t *tab, va_list tmp, char balise, int size_now);



int	print_Soctal(char c);

int	print_S(va_list tmp);

int	printStr(va_list tmp);

int	printChar(va_list tmp);

int	printInt(va_list tmp);

int	printBinary(va_list tmp);

int	printOct(va_list tmp);

int	printHexa(va_list tmp);

int	printHexa_maj(va_list tmp);

void	printLen(va_list tmp, int size);

int	printUnint(va_list tmp);


#endif
