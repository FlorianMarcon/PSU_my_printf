#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "header_MY_PRINTF.h"


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
