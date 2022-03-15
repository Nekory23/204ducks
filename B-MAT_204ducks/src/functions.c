/*
** EPITECH PROJECT, 2021
** B-MAT_204ducks
** File description:
** functions
*/

#include "ducks.h"

double function(double a, double t)
{
    double res = 0;

    res = a * exp(-t);
    res += (4 - (3 * a)) * exp(-2 * t);
    res += ((2 * a) - 4) * exp(-4 * t);
    return res;
}

double derivative(double a, double t)
{
    double res = -a * exp(-t);

    res -= (4 - (3 * a)) / 2 * exp(-2 * t);
    res -= ((2 * a) - 4) / 4 * exp(-4 * t);
    return res;
}