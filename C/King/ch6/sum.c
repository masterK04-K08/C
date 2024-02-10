#include <stdio.h>

int main(void) {

    int sum = 0, n = 0;

    printf("This program sums a series of integers.\nEnter integers (0 to terminate): ");
    scanf("%d", &n);
    while (n != 0) {
        sum += n;
        scanf("%d", &n);
    }
    printf("Sum is: %d\n", sum);

    return 0;
}
