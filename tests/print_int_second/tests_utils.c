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

Test(redirect, INT2_1, redirect_all_std)
{
	my_printf("%d", 12);
	cr_assert_stdout_eq_str("12");
}

Test(redirect, INT2_2, redirect_all_std)
{
	my_printf("%.3d", 12);
	cr_assert_stdout_eq_str("012");
}

Test(redirect, INT2_3, redirect_all_std)
{
	my_printf("%.1d", 12);
	cr_assert_stdout_eq_str("12");
}

Test(redirect, INT2_4, redirect_all_std)
{
	my_printf("%3d", 12);
	cr_assert_stdout_eq_str(" 12");
}

Test(redirect, INT2_5, redirect_all_std)
{
	my_printf("%1d", 12);
	cr_assert_stdout_eq_str("12");
}

Test(redirect, INT2_6, redirect_all_std)
{
	my_printf("%+d", 12);
	cr_assert_stdout_eq_str("+12");
}

Test(redirect, INT2_7, redirect_all_std)
{
	my_printf("%+d", -12);
	cr_assert_stdout_eq_str("-12");
}

Test(redirect, INT2_8, redirect_all_std)
{
	my_printf("% d", 12);
	cr_assert_stdout_eq_str(" 12");
}

Test(redirect, INT2_9, redirect_all_std)
{
	my_printf("% 3d", 12);
	cr_assert_stdout_eq_str("   12");
}
