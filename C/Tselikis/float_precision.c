#include <stdio.h>

int main(void) {

	float a = 1.2365, b = 1.543;
	
	printf("%f\n", a); //1.236500
	printf("%.2f\n", a); //1.24
	printf("%.*f\n", 3, a); //1.237
	printf("%.f\n", a); // 1
	printf("%.f\n", b); // 2

	return 0;
}
