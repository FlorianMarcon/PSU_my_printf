#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "header_MY_PRINTF.h"


void	redirect_all_std(void);

Test(redirect, Binary_1, redirect_all_std)
{
	my_printf("%b", 11);
	cr_assert_stdout_eq_str("1011");
}

Test(redirect, Binary_2, redirect_all_std)
{
	my_printf("%b", 1);
	cr_assert_stdout_eq_str("1");
}


Test(redirect, Binary_3, redirect_all_std)
{
	my_printf("%b", 7);
	cr_assert_stdout_eq_str("111");
}

Test(redirect, Binary_4, redirect_all_std)
{
	my_printf("%b", 987654);
	cr_assert_stdout_eq_str("11110001001000000110");
}


Test(redirect, Binary_comeback, redirect_all_std)
{
        my_printf("%b\n", 7);
        cr_assert_stdout_eq_str("111\n");
}
