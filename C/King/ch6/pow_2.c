#include <stdio.h>

int main(void) {

    int i = 1, n = 10;

    while (i < n)
        i = i * 2;

    printf("Smallest power of 2 that is greater or equal to n is: %d\n", i);

    return 0;
}
