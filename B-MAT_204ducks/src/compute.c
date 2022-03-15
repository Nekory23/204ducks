/*
** EPITECH PROJECT, 2021
** B-MAT_204ducks
** File description:
** compute
*/

#include <stdio.h>
#include "ducks.h"

double average(double a)
{
    double mean = 0;

    for (double t = 1; t != 10000; t++)
        mean += function(a, t / 1000) * (t / 1000) / 1000;
    return mean;
}

double standard_deviation(double a)
{
    double res = 0;
    double mean = average(a);

    for (double t = 1; t != 1000000; t++)
        res += pow((t / 1000) - mean, 2) * function(a, (t / 1000)) / 1000;
    res = sqrt(res);
    return res;
}

void get_percentage(double a, double p)
{
    int prob = p * 100;

    for (double temp = 1.0; ; temp += 0.01)
        if ((derivative(a, (temp / 60)) - derivative(a, 0)) >= p) {
            printf("Time after which %d%% of the ducks are back: ", prob);
            printf("%dm ", (int)floor(temp / 60));
            printf("%d%ds\n", (int)round((int)temp % 60 / 10), (int)round((int)temp % 10));
            break;
        }
    return;
}

double get_time(double a, double time)
{
    double res = 0;
    
    res = (derivative(a, time) - derivative(a, 0)) * 100;
    return res;
}