#include <stdio.h>

void get(int n) {
	if(n < 1) return;
	get(n-1);
	get(n-3);
	printf("%d\n", n);
}

int main(void) {

	get(6);

	return 0;
}
