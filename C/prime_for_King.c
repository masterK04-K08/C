#include <stdio.h>

int main (void) {
    
    int d, n = 1;

    for (d = 2; d < n; d++)
        if (n % d == 0)
            break;
    if (d < n)
        printf("False\n");
    else
        printf("True\n");


    return 0;
}
