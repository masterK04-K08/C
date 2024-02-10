#include <stdio.h>

int main(void) {

	int len;	

	printf("%c\n",'w');
	printf("%d\n", -100);
	printf("%f\n", 1.56);
	printf("%s\n", "string");
	printf("%e\n", 100.25);
	printf("%g\n", 0.0000123);
	printf("%X\n", 15);
	printf("%o\n", 14);
	printf("test%n\n", &len);
	printf("%d%%\n", 100);

	printf("------------\n");
	printf("%d\n", len);


	return 0;
}
