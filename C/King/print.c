#include <stdio.h>

#define LENGTH 10
#define DIGITS 4

int main(void) {

	printf("|%*.*d|%-*.*d|", LENGTH, DIGITS, 123, LENGTH, DIGITS, 123);

	return 0;
}
