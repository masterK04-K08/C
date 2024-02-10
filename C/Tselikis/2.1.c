#include <stdio.h>

int main(void) {

	int i = 100;

	i = i + i; // 200

	printf("V1:%d\tV2:%d\n", i + i, i); // i + i = 400 | i = 200

	return 0;
}
