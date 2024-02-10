#include <stdio.h>
#include <math.h>

int main (void) {


    int i = 2; // LOOP variable
    int n = 5;

    while (i < sqrt(n)) { // CONDITION
        if (n % i == 0)
            break;
        i++; // INCREMENT COUNTER
    }
    if (i > sqrt(n))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
