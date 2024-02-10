#include <stdio.h>

int main(void) {
	
	double a = 3.1;

	if(a == 3.1)
		printf("Yes\n");
	else
		printf("No\n");

	printf("%.9f\n", a-3.1);

	return 0;
}
