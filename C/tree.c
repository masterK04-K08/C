#include <stdio.h>

int main(void) {

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 9-i; j++)
			printf(" ");
		for(int z = 0; z < i-1; z++)
			printf("*");
		for(int k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
