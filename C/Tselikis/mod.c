#include <stdio.h>

int main(void) {

	for(int i = 10; i > 0; i--)
		for(int j = 2; j <= 10; j++)
			printf("%d%%%d x %d\n", i,j, i % j);


	return 0;
}
