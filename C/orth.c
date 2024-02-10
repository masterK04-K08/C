#include <stdio.h>

int main (void) {
    
    for (int i = 1; i <= 3; i++) {
        for (int k = 1; k <= i; k++)
            printf("+ ");
        for (int j = 1; j < 7 - i; j++)
            printf("$ ");
    printf("\n");
    }
    
    for (int i = 1; i <= 2; i++) {

        for (int k = 1; k <= 3-i; k++)
            printf("+ ");
        for (int j = 1; j <= 3 + i; j++)
            printf("%% ");
    printf("\n");

    }
    return 0;
}
