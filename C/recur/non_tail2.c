#include <stdio.h>

void e(int n) {

	if (n > 0) {
		e(--n);
		printf("%d ", n);
		e(--n);
	}
}

int main(void) {

	e(4);
	printf("\n");

	return 0;
}
