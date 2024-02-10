#include <stdio.h>

int main(void) {

	int a = 12;


	printf("%-4d\n", a); // |12  |
	printf("%+4d\n", a); // | +12|
	printf("% 4d\n", a); // |  12|
	printf("%#0x\n", a); // |0xc| 0 has no effect
	printf("%#o\n", a);  // |014|
	printf("%04d\n", a); // |0012|

	return 0;
}
