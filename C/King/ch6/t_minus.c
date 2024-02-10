#include <stdio.h>

int main(void) {

    {int i = 10;

    while (i > 0) {
        printf("T minus %2d and counting\n", i);
        i--;
    }
    }

    printf("\n");

    int i = 10;

    while (i > 0)
        printf("T minus %2d and counting\n", i--);
      
    


    return 0;
}
