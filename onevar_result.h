#ifndef ONEVAR_RESULT_H
#define ONEVAR_RESULT_H

#include <stddef.h>
#include <stdio.h>

typedef struct {
    double x;       //optimal solution for f(x)
    size_t numeval; //number of function evaluation
    double fval;    //best function value
} OnevarResult;

void print_onevar_result(const OnevarResult res);

#endif /* ONEVAR_RESULT_H */
