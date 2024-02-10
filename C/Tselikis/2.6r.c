#include <stdio.h>

int main(void) {

	int x = 21, y = 0xa, z = 077;

//x to octal = 25
//x to hex = 15

	printf("%-3d\n", x);
	printf("%3d\n", x);
	printf("%-3x\n", x);
	printf("%o%%\n", x);
	printf("%X\n", y);
	printf("%2x\n", y);
	printf("%d\n", y);
	printf("%o\n", z);
	printf("%.3o\n", z);
	printf("%d\n", z);

	return 0;
}
