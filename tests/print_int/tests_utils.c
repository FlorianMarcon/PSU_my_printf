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

Test(redirect, INT1, redirect_all_std)
{
	my_printf("%i", 12);
	cr_assert_stdout_eq_str("12");
}

Test(redirect, INT2, redirect_all_std)
{
	my_printf("%.3i", 12);
	cr_assert_stdout_eq_str("012");
}

Test(redirect, INT3, redirect_all_std)
{
	my_printf("%.1i", 12);
	cr_assert_stdout_eq_str("12");
}

Test(redirect, INT4, redirect_all_std)
{
	my_printf("%3i", 12);
	cr_assert_stdout_eq_str(" 12");
}

Test(redirect, INT5, redirect_all_std)
{
	my_printf("%1i", 12);
	cr_assert_stdout_eq_str("12");
}

Test(redirect, INT6, redirect_all_std)
{
	my_printf("%+i", 12);
	cr_assert_stdout_eq_str("+12");
}

Test(redirect, INT7, redirect_all_std)
{
	my_printf("%+i", -12);
	cr_assert_stdout_eq_str("-12");
}

Test(redirect, INT8, redirect_all_std)
{
	my_printf("% i", 12);
	cr_assert_stdout_eq_str(" 12");
}

Test(redirect, INT9, redirect_all_std)
{
	my_printf("% 3i", 12);
	cr_assert_stdout_eq_str("   12");
}

Test(redirect, printInt_comeback, redirect_all_std)
{
	my_printf("%i\n", 7);
	cr_assert_stdout_eq_str("7\n");
}
