#include <stdio.h>

int main(void) {
	
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= 10-i; j++)
			printf(" ");
		for(int n = 1; n <= i; n++)
			printf("*");
		for(int k = 1; k <= i-1; k++)
			printf("*");
		
	printf("\n");
	}
	return 0;

}
