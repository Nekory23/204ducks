/*
** EPITECH PROJECT, 2021
** EpitechTools
** File description:
** main
*/

#ifndef MAIN_H_
#define MAIN_H_

/* INCLUDE */
#include <stdbool.h>
#include <math.h>

/* STATIC CONST */
static const int SUCCESS = 0;
static const int FAIL = 1;
static const int ERROR = 84;
static const char ERRARG[] = "Error: this program takes only one argument\n";
static const char ERRVAL[] = "Error: the argument must be a positive number\n";
static const char ERVAL2[] = "Error: the value must be between 0 and 2.5\n";

/* PROTOTYPE */
// error handling
bool error_handling(int ac, char const **av);
int display_help(void);

// functions to compute
double function(double a, double t);
double derivative(double a, double t);

// compute
double average(double a);
double standard_deviation(double a);
void get_percentage(double a, double percent);
double get_time(double a, double time);

#endif /* !MAIN_H_ */
