#include <stdio.h>

int main(void) {
	
	int k;
	float i = 10.9, j = 20.3;

	k = (int)i + j; //10 + 20.3 -> 30.3 but get truncated to 30

	printf("%d %d\n", k, (int)(i + (int)j)); // 30, (int)(10.9 + 20) = 30


	return 0;
}
