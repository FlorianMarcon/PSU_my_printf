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
