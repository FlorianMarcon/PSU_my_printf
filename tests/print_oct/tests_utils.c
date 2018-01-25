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

Test(redirect, OCT_1, redirect_all_std)
{
	my_printf("%o", 12);
	cr_assert_stdout_eq_str("14");
}

Test(redirect, OCT_2, redirect_all_std)
{
	my_printf("%+o", 12);
	cr_assert_stdout_eq_str("+14");
}

/*
Test(redirect, OCT_3, redirect_all_std)
{
	my_printf("% o", 134);
	cr_assert_stdout_eq_str(" 206");
}
Test(redirect, OCT_4, redirect_all_std)
{
	my_printf("% 3o", 987);
	cr_assert_stdout_eq_str("   1733");
}
*/
Test(redirect, OCT_5, redirect_all_std)
{
	my_printf("%#o", 12);
	cr_assert_stdout_eq_str("014");
}

Test(redirect, OCT_6, redirect_all_std)
{
	my_printf("%.7o", 56);
	cr_assert_stdout_eq_str("0000070");
}

Test(redirect, OCT_7, redirect_all_std)
{
	my_printf("%7o", 56);
	cr_assert_stdout_eq_str("     70");
}

Test(redirect, OCT_8, redirect_all_std)
{
	my_printf("%2o", 56);
	cr_assert_stdout_eq_str("70");
}

Test(redirect, OCT_9, redirect_all_std)
{
	my_printf("%.2o", 56);
	cr_assert_stdout_eq_str("70");
}
/*
Test(redirect, OCT_10, redirect_all_std)
{
	my_printf("%+o", -12);
	cr_assert_stdout_eq_str("-14");
}
*/
