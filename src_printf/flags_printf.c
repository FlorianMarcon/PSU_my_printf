/*
** EPITECH PROJECT, 2017
** header flag printf
** File description:
** printf
*/
#include "my.h"
#include "header_MY_PRINTF.h"
#include <stdarg.h>

int    flags_printf(char cara, va_list tmp, int size_now)
{
        int var;
        char *var2;
        int *pt;
        unsigned int unsi;

        switch(cara) {
                case 'b':
                        unsi = va_arg(tmp, unsigned int);
                        my_put_unnbr(unsi);
                        my_putchar('\n');
                        var2 = stock_int_in_str((int)unsi);
                        my_putstr(var2);
                        var2 = convert_base(var2, "0123456789", "01");
                        my_putstr(var2);
                        break;
                case 'd':
                        var = va_arg(tmp, int);
                        my_put_nbr(var);
                        size_now += lenint(var);
                        break;
                case 'i':
                        var = va_arg(tmp, int);
                        my_put_nbr(var);
                        size_now += lenint(var);
                        break;
                case 's':
                        var2 = va_arg(tmp, char *);
                        my_putstr(var2);
                        size_now += my_strlen(var2);
                        break;
                case 'c':
                        var = va_arg(tmp, int);
                        my_putchar(var);
                        size_now++;
                        break;
                case '%':
                        break;
                case 'o':
                        var = va_arg(tmp, int);
                        var2 = stock_int_in_str(var);
                        var2 = convert_base(var2, "0123456789", "01234567");
                        my_putstr(var2);
                        size_now += my_strlen(var2);
                        break;
                case 'X':
                        var = va_arg(tmp, int);
                        var2 = stock_int_in_str(var);
                        var2 = convert_base(var2, "0123456789", "0123456789ABCDEF");
                        my_putstr(var2);
                        size_now += my_strlen(var2);
                        break;
                case 'x':
                        var = va_arg(tmp, int);
                        var2 = stock_int_in_str(var);
                        var2 = convert_base(var2, "0123456789", "0123456789abcdef");
                        my_putstr(var2);
                        size_now += my_strlen(var2);
                        break;
                case 'n':
                        pt = va_arg(tmp, int *);
                        *pt = size_now;
                case 'u':
                        unsi = va_arg(tmp, unsigned int);
                        my_put_unnbr(unsi);
                        size_now += len_unint(unsi);
                        break;
                case 'p':
                        unsi = va_arg(tmp, unsigned int);
                        my_put_unnbr(unsi);
                        my_putchar('\n');
                        var2 = stock_int_in_str((int)unsi);
                        var2 = convert_base(var2, "0123456789", "0123456789abcdef");
                        my_putstr(var2);
                        break;
                        }
        return (size_now);
}
