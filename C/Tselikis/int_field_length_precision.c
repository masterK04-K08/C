#include <stdio.h>

int main(void) {

	int a = 11, b = 91;

	printf("|%10.5d| |%.5d|\n", a, b);
	printf("|%10.5x| |%.5x|\n", a, b);
	printf("|%10.5o| |%.5o|\n", a, b);

	double f = 1.3245678e23;
	printf("\n");
	printf("|%2.10lf|\n", f);
	printf("|%2.10e|\n", f);
	printf("|%2.5e|\n", f);

	char string[] = "abcdefgh";
	
	printf("\n");
	printf("%s\n", string);
	printf("|%15s|\n", string);
	printf("|%15.4s|\n", string);

	return 0;
}
