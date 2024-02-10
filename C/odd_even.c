#include <stdio.h>

int main(void) {

	for(int i = 1; i<11; i++)
		if(i%2 == 0)
			printf("%d is even\n", i);
		else
			printf("%d is odd\n", i);



	return 0;

}
