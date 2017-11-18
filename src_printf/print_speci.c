/*
** EPITECH PROJECT, 2017
** myprintf
** File description:
** printf
*/
#include "my.h"
#include "header_MY_PRINTF.h"

int     speci_printOct(char *str, char *string)
{
        int speci = find_speci(str);
        int var = 0;

        switch (speci) {
                case 0:
                        var = my_strlen(string) - my_getnbr(str);
                        while (var < 0) {
                                my_putchar('0');
                                var++;
                        }
                        var = lenint(my_getnbr(str)) + 1;
                        break;
                case 1:
                        if (my_getnbr(string) >= 0)
                                my_putchar('+');
                        var = 1;
                        break;
                case 2:
                        var = my_getnbr(str) - my_strlen(string);
                        if (var == 0)
                                var = 1;
                        while (var != 0) {
                                my_putchar(' ');
                                var--;
                        }
                        var = lenint(my_getnbr(str)) + 1;
                        break;
                case 3:
                        my_putchar('0');
                        var = 1;
                        break;
                case 4:
                        var = my_strlen(string) - my_getnbr(str);
                        while (var < 0) {
                                my_putchar(' ');
                                var++;
                        }
                        if (string[0] >= '0' && string[0] <= '9')
                                var = lenint(my_getnbr(str));
                        else
                                var = 0;
                        break;

        }
        return (var);
}

int     speci_printHexa(char *str, char *string)
{
        int speci = find_speci(str);
        int var = 0;

        switch (speci) {
                case 0:
                        var = my_strlen(string) - my_getnbr(str);
                        while (var < 0) {
                                my_putchar('0');
                                var++;
                        }
                        /*my_putstr("\nstr ===\n")
                        my_putstr(str)*/
                        var = lenint(my_getnbr(str)) + 1;
                        break;
                case 1:
                        if (my_getnbr(string) >= 0)
                                my_putchar('+');
                        var++;
                        break;
                case 2:
                        var = my_strlen(string) - my_getnbr(str);
                        if (var == 0)
                                var = 1;
                        while (var <= 0) {
                                my_putchar(' ');
                                var++;
                        }
                        var = lenint(my_getnbr(str)) + 1;
                        break;
                case 3:
                        my_putstr("0x");
                        var = 1;
                        break;
                case 4:
                        var = my_strlen(string) - my_getnbr(str);
                        while (var < 0) {
                                my_putchar(' ');
                                var++;
                        }
                        if (str[0] <= '9' && str[0] >= '0')
                        var = lenint(my_getnbr(str));
                        break;

        }
        return (var);
}
int     speci_printHexa_maj(char *str, char *string)
{
        int speci = find_speci(str);
        int var = 0;

        switch (speci) {
                case 0:
                        var = my_strlen(string) - my_getnbr(str);
                        while (var < 0) {
                                my_putchar('0');
                                var++;
                        }
                        var = lenint(my_getnbr(str)) + 1;
                        break;
                case 1:
                        if (my_getnbr(string) >= 0)
                                my_putchar('+');
                        var++;
                        break;
                case 2:
                        var = my_getnbr(str);
                        if (var == 0)
                                var = 1;
                        while (var != 0) {
                                my_putchar(' ');
                                var--;
                        }
                        var = lenint(my_getnbr(str));
                        break;
                case 3:
                        my_putstr("0X");
                        var = 1;
                        break;
                case 4:
                        var = my_strlen(string) - my_getnbr(str);
                        while (var < 0) {
                                my_putchar(' ');
                                var++;
                        }
                        var = lenint(my_getnbr(str));
                        break;

        }
        return (var);
}

int     speci_printUnint(char *str, unsigned int nb)
{
        int var = 0;
        int var2 = 0;
        int speci = find_speci(str);

        switch (speci) {
		case 0:
			var = my_getnbr(str);
			var2 = len_unint(nb) - var;
			var = lenint(var);
			while (var2 < 0) {
				my_putchar('0');
				var2++;
			}
			break;
		case 4:
			var = my_getnbr(str);
			var2 = len_unint(nb) - var;
			if (str[0] >= '0' && str[0] <= '9')
				var = lenint(var) -1;
			else
				var = -1;
			while (var2 < 0) {
				my_putchar(' ');
				var2++;
			}
			break;
                }
                return (var);
}
