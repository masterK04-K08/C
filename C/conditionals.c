#include <stdio.h>

int main (void) {
    
    int x = 8, y = 9;
    char c = 0b1000001;

    if (x > 5 && y == 9 && c == 'A')
        printf("True\n");
    else
        printf("False\n");

    printf("%c\n", c);
    return 0;
}
