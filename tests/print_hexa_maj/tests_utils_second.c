/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void	redirect_all_std(void);

Test(redirect, HEXAmaj_6, redirect_all_std)
{
	my_printf("%.2X", 16);
	cr_assert_stdout_eq_str("10");
}

Test(redirect, HEXAmaj_7, redirect_all_std)
{
	my_printf("%7X", 56);
	cr_assert_stdout_eq_str("     38");
}

Test(redirect, HEXAmaj_8, redirect_all_std)
{
	my_printf("%2x", 56);
	cr_assert_stdout_eq_str("38");
}

Test(redirect, Hexa_maj_comeback, redirect_all_std)
{
	my_printf("%X\n", 2);
	cr_assert_stdout_eq_str("2\n");
}
