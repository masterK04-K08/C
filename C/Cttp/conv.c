#include <stdio.h>

int main(void) {
	
	int a = -20; //Can't be represented int unsigned for -> DUE to WRAP AROUND is = 4'294'967'276 so if (a < b) print No
	unsigned int b = 200;
	
	printf("%u\n", a);

	if (a < b)
		printf("Yes\n");
	printf("No\n");

	return 0;
}
