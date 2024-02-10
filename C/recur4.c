#include <stdio.h>

void f(int n) {
	if (n <= 0)
		return;
	f(n-1);
	if (n % 2 == 0)
		printf("%d ", n);
}

int main(void) {

	f(10);
	printf("\n");
	return 0;
}
