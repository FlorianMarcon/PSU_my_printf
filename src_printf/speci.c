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
	specifier_t *specifier = malloc(sizeof(specifier) * 4);
	int z = 0;

	init_tab_speci(specifier);
	while (my_strncmp(str, specifier[z].balise, specifier[z].size) != 0 && z < 4) {
		z++;
	}
	if (my_strncmp(str, specifier[z].balise, specifier[z].size) == 0) {
		return(z);
	}
	return(0);
}
