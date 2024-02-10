#include <stdio.h>

int main(void) {
	
	int i = 30;
	float j = 10.65f;

	printf("%f\n%d\n", i, j); // compiler swifts variables automatically

	printf("%f\n%d\n", (float)i, (int)j); // 30.000000  10

	return 0;
}
