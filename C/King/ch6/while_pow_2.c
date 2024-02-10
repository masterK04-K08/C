#include <stdio.h>

int main(void) {

    int p = 1;

    

    /* LOOP */
    {int i = 0; // COUNT VARIABLE
    while (i < 11) { // CONTROLLING EXPRESSION
        printf("2 ^ %2d = %4d\n", i, p);
        p *= 2;
        i++;
    }
    }
    /* LOOP */
    

    
    return 0;
}
