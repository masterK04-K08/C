
#include <stdio.h>

int main(void) {

	char msg[] = "This is a string";


	printf("%s\n", msg); //prints 16bytes
	printf("%.6s\n", msg); //prints 6bytes | 1 char = 1 byte
	printf("%.30s\n", msg); //prints 16bytes

	return 0;
}
