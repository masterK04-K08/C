#include <stdio.h>

int main (void) {
    
    int month_days = 30, weekday = 5;

    for (int i = 1; i <= 3*weekday-3; i++)
        printf(" ");

    for (int j = 1; j <= (8 - weekday); j++) 
        printf("%2d ", j);
    
    printf("\n");

    for (int k = 9-weekday; k < month_days; k++) {
        printf("%2d ", k);
        if ((k - (8 - weekday)) % 7 == 0)
            printf("\n");
    }
    return 0;
}
