#include <stdio.h>

int diff_sqr(int x, int y);

int main(void) {

    int x, y;
    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);

    printf("Difference of squares is: %d\n", diff_sqr(x, y));

    return 0;
}

int diff_sqr(int x, int y) {
    return x*x - y*y;
}
