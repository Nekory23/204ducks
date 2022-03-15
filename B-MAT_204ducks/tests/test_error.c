/*
** EPITECH PROJECT, 2021
** 204ducks
** File description:
** test_error
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "ducks.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(error_handling, no_arg, .init=redirect_all_stdout)
{
    int ac = 0;
    char const **av = NULL;

    cr_assert_eq(error_handling(ac, av), true);
}

Test(error_handling, no_number, .init=redirect_all_stdout)
{
    int ac = 2;
    char const *av[] = {"\0", "2zdbudagu"};

    cr_assert_eq(error_handling(ac, av), true);
}

Test(error_handling, bad_value, .init=redirect_all_stdout)
{
    int ac = 2;
    char const *av[] = {"\0", "2.6"};

    cr_assert_eq(error_handling(ac, av), true);
}

Test(error_handling, bad_value2, .init=redirect_all_stdout)
{
    int ac = 2;
    char const *av[] = {"\0", "-2.6"};

    cr_assert_eq(error_handling(ac, av), true);
}