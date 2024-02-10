#include <stdio.h>

# define NRM    "\x1b[0m"

# define FRED   "\x1b[31m"
# define BRED   "\x1b[41m"

int main (void) {
    
    printf("%sUSA%s\n", BRED, NRM);


    return 0;
}
