/*
** EPITECH PROJECT, 2021
** 204ducks
** File description:
** start
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ducks.h"

int start(int ac, char const **av)
{
    double a = 0;
    int min = 0;
    int sec = 0;

    if (ac == 2 && strcmp(av[1], "-h") == !true)
        return display_help();
    if (error_handling(ac, av))
        return ERROR;
    a = atof(av[1]);
    min = (int)average(a);
    sec = (int)ceil((average(a) - (int)average(a)) * 60);
    printf("Average return time: %dm %ds\n", min, sec);
    printf("Standard deviation: %.3f\n", standard_deviation(a));
    get_percentage(a, 0.50);
    get_percentage(a, 0.99);
    printf("Percentage of ducks back after 1 minute: %.1f%%\n", get_time(a, 1));
    printf("Percentage of ducks back after 2 minutes: %.1f%%\n", get_time(a, 2));
    return SUCCESS;
}