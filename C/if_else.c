#include <stdio.h>

int main (void) {
    
    int x = 9, y = 10;

    if (x< 0)
        printf("%d greater than zero\n", x);
    else if (x > 20)
        printf("%d less than 20\n", x);
    else if (x < y)
        printf("%d less that y\n", x);

    return 0;
}
