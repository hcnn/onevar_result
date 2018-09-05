#include "onevar_result.h"

void print_onevar_result(const struct OnevarResult res){
    printf("%30s: %16.8f\n", "Optimal Solution x", res.x);
    printf("%30s: %7d\n", "Number of Function Evaluation", (int)res.numeval);
    printf("%30s: %16.8f\n", "Best Function Value", res.fval);    
}
