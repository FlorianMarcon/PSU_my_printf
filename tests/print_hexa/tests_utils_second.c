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

Test(redirect, HEXA_6, redirect_all_std)
{
	my_printf("%.2x", 15);
	cr_assert_stdout_eq_str("0f");
}

Test(redirect, HEXA_7, redirect_all_std)
{
	my_printf("%7x", 56);
	cr_assert_stdout_eq_str("     38");
}

Test(redirect, HEXA_8, redirect_all_std)
{
	my_printf("%2x", 56);
	cr_assert_stdout_eq_str("38");
}
Test(redirect, HEXA_comeback, redirect_all_std)
{
	my_printf("%x\n", 15);
	cr_assert_stdout_eq_str("f\n");
}
