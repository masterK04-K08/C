
#include <stdio.h>

int main(void) {
	
	int sec = 156789;
	int hours = sec / 3600;

	printf("%d\n", hours);

	sec %= 3600;
	int min = sec/60;

	printf("%d\n", min);

	sec %= 60;

	printf("%d\n", sec);


	return 0;
}
