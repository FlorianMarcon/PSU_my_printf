/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** 
*/
#include "my.h"

int	my_signe(char const *str,int i)
{
	int signe = 1;
	
	while(str[i-1] == '+' || str[i-1] == '-') {
		if(str[i-1] == '-')
			signe *= (-1);
		i--;

	}
	return (signe);
}
int	my_getnbr(char const *str)
{
	int i = 0;
	int a = 0;
	long resultat = 0;
	int resultat_int;
	int unite = 0;
	int signe;


	
	while (str[i] != '\0' && (str[i] < 47 || str[i] > 58))
		i++;
	signe = my_signe(str,i);
       	while(str[i] < 58 && str[i] > 47) {
		a++;
		i++;
	}
	i = i - a;
	for(; a != 0 ; a--) {		
		while(unite != str[i] - 48)
			unite++;
		resultat =(resultat * 10) + unite; 
		i++;
		unite = 0;
	}
	if(resultat > 2147483647)
		return (0);
	resultat_int = resultat;
	resultat_int *= signe;
	
	
	return (resultat_int);
}

