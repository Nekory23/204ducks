/*
** EPITECH PROJECT, 2021
** 204ducks
** File description:
** error_handling
*/

#include <stdio.h>
#include <stdlib.h>
#include "ducks.h"

bool error_handling(int ac, char const **av)
{
    int tmp = 0;

    if (ac != 2) {
        fprintf(stderr, ERRARG);
        return true;
    }
    for (int i = 0; av[1][i] != '\0'; i++)
        if (av[1][i] == '.')
            continue;
        else if (av[1][i] >= '0' && av[1][i] <= '9')
            continue;
        else {
            fprintf(stderr, ERRVAL);
            return true;
        }
    tmp = atof(av[1]) * 10;
    if (tmp < 0 || tmp > 25) {
        fprintf(stderr, ERVAL2);
        return true;
    }
    return false;
}