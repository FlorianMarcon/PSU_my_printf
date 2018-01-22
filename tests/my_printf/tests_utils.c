/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void	redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(redirect, string, redirect_all_std)
{
	my_printf("%s", "salut toi");
	cr_assert_stdout_eq_str("salut toi");
}
Test(redirect, String3, redirect_all_std)
{
	my_printf("%s%s", "salut toi", " ca va?");
	cr_assert_stdout_eq_str("salut toi ca va?");
}

Test(redirect, Char, redirect_all_std)
{
	my_printf("%c", 's');
	cr_assert_stdout_eq_str("s");
}

Test(redirect, comeback, redirect_all_std)
{
	my_printf("\n");
	cr_assert_stdout_eq_str("\n");
}
