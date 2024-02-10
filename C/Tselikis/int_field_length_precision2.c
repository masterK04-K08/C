#include <stdio.h>

int main(void) {

	int a = 11, b = 91;

	printf("|%10.5d| |%.5d|\n", a, b);
	printf("|%#10.5x| |%.5x|\n", a, b);
	printf("|%#10.5o| |%.5o|\n", a, b);
	
	float f = 1.2345678987654f;
	printf("\n");
	printf("|%2.10lf|\n", f);
	printf("|%22.10e|\n", f);
	printf("|%.10g|\n", f);

	char str[] = "abcdefghi";

	printf("\n");
	printf("|%.3s|\n", str);
	printf("|%10.8s|\n", str);



	return 0;

}
