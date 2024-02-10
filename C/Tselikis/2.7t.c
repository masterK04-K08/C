#include <stdio.h>

int main(void) {

	double x = -12.123456789;


	printf("%.3lf\n", x);
	printf("%.9lf\n", x);
	printf("%15.9lf\n", x);
	printf("%lf\n", x);
	printf("%.5lf\n", x);
	printf("%.lf\n", x);

	return 0;
}
