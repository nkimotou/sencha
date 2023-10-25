#include "output.h"
#include <stdio.h>

/*
 * 'stdio.h' is the import for the standard input/output library.
 */

int main(){
    /*
     *
     */
    int num1 = 10;
    int num2 = 5;
    // Subtract num2 from num1.
    int subtract = num1 - num2;

    // Print out the results of subtract.
    printf("10 - 5 = %d\n", subtract);
    // Return 0 for successful program execution.
    return 0;
}