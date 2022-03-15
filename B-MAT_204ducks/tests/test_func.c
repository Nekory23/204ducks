/*
** EPITECH PROJECT, 2021
** 204ducks
** File description:
** test_func
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "ducks.h"

int start(int ac, char const **av);

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(getTime, getTime1min)
{
    double a = 1.6;
    double time = 1;

    cr_assert_float_eq(get_time(a, time), 46.9, 0.1);
}

Test(getTime, getTime2min)
{
    double a = 1.6;
    double time = 2;

    cr_assert_float_eq(get_time(a, time), 79.1, 0.1);
}

Test(starthelp, display_help, .init=redirect_all_stdout)
{
    int ac = 2;
    char const  *av[] = {"\0", "-h"};

    cr_assert_eq(start(ac, av), SUCCESS);
}