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
#include <stdio.h>

int	print_Soctal(char c)
{
	int size = 0;
	int i = 0;
	int var;
	char *var2;

	my_putchar('\\');
	var = c;
	var2 = stock_int_in_str(var);
	var2 = convert_base(var2, "0123456789", "01234567");
	size = my_strlen(var2);

	while (i + size != 3){
		my_putchar('0');
		i++;
	}
	my_putstr(var2);
	return (size);
}

int	print_S(va_list tmp, char *str)
{
	char *string = va_arg(tmp, char *);
	int size = 0;
	int i = 0;
	int speci = find_speci(str);

	if (speci == 4) {
		while (string[i] != '\0') {
			if (string[i] < 32 || string [i] >= 127) {
				size += print_Soctal(string[i]);
			}
			else{
				my_putchar(string[i]);
				size++;
			}
			i++;
		}
	}
	else
		my_putstr("\n|DON'T NEED TO PRECISION: ONLY %%S|\n");

	return (1);
}

int	printStr(va_list tmp, char *str)
{
	char *string = va_arg(tmp, char *);
	int speci = find_speci(str);
	int var = 0;
	int i = 0;

	if (speci == 4) {
		my_putstr(string);
		var = 1;
	} else if (speci == 0) {
		var = my_getnbr(str);
		while (i < var && string[i] != '\0') {
			my_putchar(string[i]);
			i++;
		}
		var = lenint(my_getnbr(str)) + 1;
	} else
		my_putstr("\n|DON'T NEED TO PRECISION: ONLY %%s|\n");
	return (var + 1);
}

int	printChar(va_list tmp, char *str)
{
	int letter = va_arg(tmp, int);
	int speci = find_speci(str);

	if (speci == 4)
		my_putchar(letter);
	else
		my_putstr("\n|DON'T NEED TO PRECISION: ONLY %%c|\n");
	return (1);
}

int	printInt(va_list tmp, char *str)
{
	int nb = va_arg(tmp, int);
	int var = speci_printInt(str, nb);

	my_put_nbr(nb);
	return (1 + var);
}

int	printBinary(va_list tmp, char *str)
{
	unsigned int unsi = va_arg(tmp, unsigned int);
	char *string = stock_int_in_str(unsi);
//	int len;
	int speci = find_speci(str);

	if (speci == 4) {
		string = convert_base(string, "0123456789", "01");
//		len = my_strlen(string);
		my_putstr(string);
	}
	else
		my_putstr("\n|DON'T NEED TO PRECISION: ONLY %%b|\n");
	return (1);
}

int	printOct(va_list tmp, char *str)
{
	int nb = va_arg(tmp, int);
	char *string = stock_int_in_str(nb);
	int len;

	string = convert_base(string, "0123456789", "01234567");
	len = speci_printOct(str, string);
	my_putstr(string);
	return (len + 1);
}

int	printHexa(va_list tmp, char *str)
{
	int nb = va_arg(tmp, int);
	char *string = stock_int_in_str(nb);
	int len = 0;

	string = convert_base(string, "0123456789", "0123456789abcdef");
	len += speci_printHexa(str, string);
	string = my_strlowcase(string);
	my_putstr(string);
	return (len + 1);
}

int	printHexa_maj(va_list tmp, char *str)
{
	int nb = va_arg(tmp, int);
	char *string = stock_int_in_str(nb);
	int len =  0;

	string = convert_base(string, "0123456789", "0123456789ABCDEF");
	len += speci_printHexa_maj(str, string);
	my_putstr(string);
	return (len + 1);
}

void	printLen(va_list tmp, int size)
{
	int *len = va_arg(tmp , int *);

	*len = size;
}


int	printUnint(va_list tmp, char *str)
{
	unsigned int nb = va_arg(tmp, unsigned int);
	int len = speci_printUnint(str, nb);

	my_put_unnbr(nb);
	return (len + 1);
}

int	printAdresse(va_list tmp, char *str)
{
	unsigned int unsi = va_arg(tmp, unsigned int);
	char *var2 = stock_int_in_str((int)unsi);
//	int len = 0;
	int speci = find_speci(str);

	if (speci == 4) {
		var2 = convert_base(var2, "0123456789", "0123456789ABCDEF");
	//	len += my_strlen(var2) + 2;
		my_putstr("0x");
		my_putstr(var2);
	}
	else
		my_putstr("\n|DON'T NEED TO PRECISION: ONLY %%p|\n");
	return (1);
}
