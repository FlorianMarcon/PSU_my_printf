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

int	find_speci(char *str)
{
	int z = 0;

	while (str[0] != tab_speci[z].balise && z < 4) {
		z++;
	}
	return (z);
}
