#include <stdio.h>  // printf
#include "onevar_result.h"

int main()
{
    struct OnevarResult res;

    res.x = 123;
    res.numeval = 10000;
    res.fval = 1.23e-7;

    print_onevar_result(res);
    
	return 0;
}

