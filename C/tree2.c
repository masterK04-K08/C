#include <stdio.h>

int main(void) {

	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= 10-i; j++)
			//printf("_");	
			printf(" ");	
		for(int k = 1; k <= i; k++)
			printf("*");
		for(int n = 1; n <= i-1; n++)
			printf("*");
	printf("\n");
	}

	return 0;
}
