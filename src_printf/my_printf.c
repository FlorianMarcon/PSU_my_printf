/*
** EPITECH PROJECT, 2017
** myprintf
** File description:
** printf
*/

#include "my.h"
#include <stdarg.h>
#include "header_MY_PRINTF.h"

int	my_printf(char *str, ...)
{
	va_list tmp;
	int i = 0;
	int size_now = 0;


	va_start(tmp, str);
	while(str[i] != '\0') {

		if(str[i] == '%') {
			i++;
			size_now = flags_printf(str[i], tmp, size_now);
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
