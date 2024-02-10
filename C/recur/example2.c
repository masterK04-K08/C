#include <stdio.h>

void fun();

int main(void) {

	fun();
	fun();
	fun();

	return 0;
		
}

void fun() {
	static int x = 10, y = 5;
	printf("x=%d\ty=%d\n", x, y);
	x++;
	y = y + 10;
}
