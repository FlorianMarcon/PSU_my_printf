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
	size = my_strlen(var2) + 1;

	while (i + size != 3){
		my_putchar('0');
		i++;
	}
	my_putstr(var2);
	return (size);
}

int	print_S(va_list tmp)
{
	char *str = va_arg(tmp, char *);
	int size = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < 32 || str [i] >= 127) {
			size += print_Soctal(str[i]);
		}
		else{
			my_putchar(str[i]);
			size++;
		}
		i++;
	}
	return (size);
}

int	printStr(va_list tmp)
{
	char *str = va_arg(tmp, char *);
	int len = my_strlen(str);

	my_putstr(str);
	return (len);
}

int	printChar(va_list tmp)
{
	int letter = va_arg(tmp, int);

	my_putchar(letter);
	return (1);
}

int	printInt(va_list tmp)
{
	int nb = va_arg(tmp, int);
	int len = lenint(nb);

	my_put_nbr(nb);
	return (len);
}

int	printBinary(va_list tmp)
{
	unsigned int unsi = va_arg(tmp, unsigned int);
	char *str = stock_int_in_str(unsi);
	int len;

	str = convert_base(str, "0123456789", "01");
	len = my_strlen(str);
	my_putstr(str);
	return (len);
}

int	printOct(va_list tmp)
{
	int nb = va_arg(tmp, int);
	char *str = stock_int_in_str(nb);
	int len;

	str = convert_base(str, "0123456789", "01234567");
	len = my_strlen(str);
	my_putstr(str);
	return (len);
}
int	printHexa(va_list tmp)
{
	int nb = va_arg(tmp, int);
	char *str = stock_int_in_str(nb);
	int len;

	str = convert_base(str, "0123456789", "0123456789abcdef");
	len = my_strlen(str);
	my_putstr(str);
	return (len);
}
int	printHexa_maj(va_list tmp)
{
	int nb = va_arg(tmp, int);
	char *str = stock_int_in_str(nb);
	int len;

	str = convert_base(str, "0123456789", "0123456789ABCDEF");
	len = my_strlen(str);
	my_putstr(str);
	return (len);
}

void	printLen(va_list tmp, int size)
{
	int *len = va_arg(tmp , int *);

	*len = size;
}


int	printUnint(va_list tmp)
{
	unsigned int nb = va_arg(tmp, unsigned int);
	int len = len_unint(nb);

	my_put_unnbr(nb);
	return (len);
}/*
int	printAdresse(void *var)
{


}
*/
