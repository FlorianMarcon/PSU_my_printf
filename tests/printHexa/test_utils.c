#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "header_MY_PRINTF.h"


void	redirect_all_std(void);

Test(redirect, HEXA_1, redirect_all_std)
{
        my_printf("%x", 15);
        cr_assert_stdout_eq_str("f");
}

Test(redirect, HEXA_2, redirect_all_std)
{
        my_printf("%x", 67);
        cr_assert_stdout_eq_str("43");
}

Test(redirect, HEXA_3, redirect_all_std)
{
        my_printf("%x", 1444);
        cr_assert_stdout_eq_str("5a4");
}

Test(redirect, HEXA_4, redirect_all_std)
{
        my_printf("%#x", 987);
        cr_assert_stdout_eq_str("0x3db");
}

Test(redirect, HEXA_5, redirect_all_std)
{
        my_printf("%.5x", 15);
        cr_assert_stdout_eq_str("0000f");
}

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
