#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "header_MY_PRINTF.h"


void	redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(redirect, String, redirect_all_std)
{
        my_printf("%s", "salut toi");
        cr_assert_stdout_eq_str("salut toi");
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
