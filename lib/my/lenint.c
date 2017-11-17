/*
** EPITECH PROJECT, 2017
** stock_int_in_str
** File description:
**
*/

#include "my.h"

int     lenint(int nb)
{
	int size = 0;

	while (nb != 0) {
		nb -= (nb % 10);
		nb = nb / 10;
		size++;
	}
	return (size);
}
