/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** 
*/
#include <unistd.h>

int	my_strlen(char const *str);
	
char	*my_strlowcase(char *str)
{
       	int i = 0;

	while( str[i] != '\0') {
		if(str[i] >= 65 && str[i] <= 90) 
			str[i] = str[i] + 32;
		i++;
	}
	return(str);
}
