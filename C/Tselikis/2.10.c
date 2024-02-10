#include <stdio.h>

int main(void) {

	float x = 2.2f, y = 5.4f, f;
	int i;
	printf("%d\t%.1f\n", (int)(x/y), x-(int)(x/y)*y);	

	return 0;
}
