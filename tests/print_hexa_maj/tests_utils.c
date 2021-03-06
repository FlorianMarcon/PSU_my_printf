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

Test(redirect, HEXAmaj_1, redirect_all_std)
{
	my_printf("%X", 15);
	cr_assert_stdout_eq_str("F");
}

Test(redirect, HEXAmaj_2, redirect_all_std)
{
	my_printf("%X", 67);
	cr_assert_stdout_eq_str("43");
}

Test(redirect, HEXAmaj_3, redirect_all_std)
{
	my_printf("%X", 1444);
	cr_assert_stdout_eq_str("5A4");
}

Test(redirect, HEXAmaj_4, redirect_all_std)
{
	my_printf("%#X", 987);
	cr_assert_stdout_eq_str("0X3DB");
}

Test(redirect, HEXAmaj_5, redirect_all_std)
{
	my_printf("%.5X", 16);
	cr_assert_stdout_eq_str("00010");
}
