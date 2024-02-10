#include <stdio.h>

int main(void) {

	int x = 21, y = 0xa, z = 077; // 21, 10, 63


	printf("%-3d\n", x); // |21 |
	printf("%3d\n", x); // | 21|
	printf("%-3x\n", x);
	printf("%-o%%\n", x);
	printf("%-2X\n", y);
	printf("%2x\n", y);
	printf("%-3d\n", y);
	printf("%-3o\n", z);
	printf("%#3o\n", z);
	printf("%-3d\n", z);

	return 0;
}
