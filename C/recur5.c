
#include <stdio.h>

int f(int n) {
	if (n == 0)
		return 1;
	printf("%d\n", n);	
	return f(n-1);
}

int main(void) {

	printf("%d ", f(10));
	printf("\n");
	return 0;
}
