#include <stdio.h>

int main(void) {

	float capital = -100.0, inter = 0.01;

	capital += capital*inter;

	printf("%.1f\n", capital);

	return 0;
}
