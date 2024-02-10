#include <stdio.h>
#include <math.h>

int main (void) {

    int n = 2, i = 2;

    for(; i <= sqrt(n); i++) {
        if (n % i == 0)
            break;
    }
    if (i > sqrt(n))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
