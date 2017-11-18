/*
** EPITECH PROJECT, 2017
** myprintf
** File description:
** printf
*/
#include "my.h"
#include "header_MY_PRINTF.h"

int     speci_printInt(char *str, int nb)
{
	int var = 0;
	int speci = find_speci(str);

	switch (speci) {
		case 0:
			var = speci_printInt0(speci, str, nb);
			break;
		case 1:
			var = speci_printInt1(speci);
			break;
		case 2:
			var = speci_printInt2(speci, str);
			break;
		case 4:
			var = speci_printInt4(speci, str, nb);
			break;
		}
		return (var);
}

int     speci_printInt0(int speci, char *str, int nb)
{
	int var = 0;
	int var2 = 0;

	var = my_getnbr(str);
	var2 = lenint(nb) - var;
	var = lenint(var) + 1;
	while (var2 < 0) {
		my_putchar('0');
		var2++;
	}
	return (var);
}

int     speci_printInt1(int speci, int nb)
{
	int var = 1;

	if (nb >= 0)
		my_putchar('+');
	return (var);
}

int     speci_printInt2(int speci, char *str)
{
	int var = 0;

	var = my_getnbr(str);
	if (var == 0)
		my_putchar(' ');
	while (var != 0) {
		my_putchar(' ');
		var--;
	}
	var = lenint(my_getnbr(str)) + 1;
	return (var);
}

int     speci_printInt4(int speci, char *str, int nb)
{
	int var = 0;
	int var2 = 0;

	var = my_getnbr(str);
	var2 = lenint(nb) - var;
	if (str[0] >= '0' && str[0] <= '9')
		var = lenint(var);
	else
		var = 0;
	while (var2 < 0) {
		my_putchar(' ');
		var2++;
	}
	return (var);
}
