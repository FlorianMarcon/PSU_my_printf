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

Test(redirect, print_S_1, redirect_all_std)
{
	my_printf("%S", "salut toi");
	cr_assert_stdout_eq_str("salut toi");
}

Test(redirect, print_S_2, redirect_all_std)
{
	char str[] = "salut";
	str[3] = 6;
	str[4] = 29;

	my_printf("%S", str);
	cr_assert_stdout_eq_str("sal\\006\\029");
}

Test(redirect, print_S_3, redirect_all_std)
{
	char str[] = "salut";
	str[3] = 6;

	my_printf("%S", str);
	cr_assert_stdout_eq_str("sal\\006t");
}

Test(redirect, print_S_4, redirect_all_std)
{
	char str[] = "es ce que le test fonctionne";
	str[3] = 127;

	my_printf("%S", str);
	cr_assert_stdout_eq_str("es \\177e que le test fonctionne");
}

Test(redirect, print_S_comeback, redirect_all_std)
{
	char str[] = "es ce que le test f\nonctionne";
	str[3] = 127;

	my_printf("%S", str);
	cr_assert_stdout_eq_str("es \\177e que le test f\\012onctionne");
}
