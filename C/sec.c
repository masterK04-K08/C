#include <stdio.h>

int main(void) {
	
	short sec = 3700;
	short hours = sec / 3600;

	printf("%hd\n", hours);

	sec %= 3600;
	short min = sec/60;

	printf("%hd\n", min);

	sec %= 60;

	printf("%hd\n", sec);


	return 0;
}
