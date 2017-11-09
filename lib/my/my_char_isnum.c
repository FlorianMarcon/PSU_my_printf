/*
** EPITECH PROJECT, 2017
** my_char_isalpha.c
** File description:
** 
*/

#include "my.h"

int	my_char_isnum(char c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
