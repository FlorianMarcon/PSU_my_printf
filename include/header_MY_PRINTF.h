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
        int (*fptr)(va_list, char *);
} tab_t;

typedef struct specifier {
        char balise;
        int size;
} specifier_t;

//choice_function§§§§§§§§§§§§§§§§
int	choice_function(va_list tmp, char *balise);

//speci§§§§§§§§§§§§§§

int     find_speci(char *str);

void	use_speci(int speci, void *data);

//print_speci§§§§§§§§§§§§§§§§§§§§§

int     speci_printInt(char *str, int nb);

int     speci_printOct(char *str, char *string);

int     speci_printHexa(char *str, char *string);

int     speci_printHexa_maj(char *str, char *string);

int     speci_printUnint(char *str, unsigned int nb);



//function §§§§§§§§§§§§§§§§§§§§§§§§§§

int	print_Soctal(char c);

int	print_S(va_list tmp, char *str);

int	printStr(va_list tmp, char *str);

int	printChar(va_list tmp, char *str);

int	printInt(va_list tmp, char *str);

int	printBinary(va_list tmp, char *str);

int	printOct(va_list tmp, char *str);

int	printHexa(va_list tmp, char *str);

int	printHexa_maj(va_list tmp, char *str);

//void	printLen(va_list tmp, int size);

int	printUnint(va_list tmp, char *str);

int     printAdresse(va_list tmp, char *str);

//tab§§§§§§§§§§§§§§§§§

static tab_t const tab[13] = {{'c', printChar}, {'s', printStr}, {'d', printInt},
                                {'i', printInt}, {'b', printBinary}, {'o', printOct},
                                {'x', printHexa}, {'X', printHexa_maj}, {'u', printUnint},
                                {'u', printUnint}, {'p', printAdresse}, {'S', print_S},
                                {'%', printInt}};

static specifier_t const tab_speci[4] = {{'.', 1}, {'+', 1}, {' ', 1}, {'#', 1}};

#endif
