#include <stdio.h>

int main(void) {

	int i = 10;

	while (i > 0){
		printf("i = %2d", i); // prints i = 2 *
		if (i == 2)
			printf(" *");
	//	printf("i = %2d", i); IF PLACED HERE IT PRINTS <space>*i = 2 
		printf("\n");
		--i; // No difference with i--
	}
	return 0;
}
