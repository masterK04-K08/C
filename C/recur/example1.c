#include <stdio.h>

void stat() {

	static int x = 0;
	x = x + 1;
	printf("x=%d\n", x);
}

int main(void) {

	for(int i = 1; i <= 3; i++)
		stat();
	return 0;

}
