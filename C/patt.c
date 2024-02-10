#include <stdio.h>

int main(void) {

	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <=5; j++)
			printf("%d ", j);
		printf("\n");
	}
	printf("\n\n");
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <=5; j++)
			printf("%d ", i);
		printf("\n");
	}

	printf("\n\n");
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <=5; j++)
			printf("* ");
		printf("\n");
	}

	printf("\n\n");
	for(int i = 1; i <= 5; i++) {
		for(int j = 10; j < 15; j++)
			printf("%X ", j);
		printf("\n");
	}

	printf("\n\n");
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <=i; j++)
			printf("%d ", j);
		printf("\n");
	}
	printf("\n\n");
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <=i; j++)
			printf("%d ", i);
		printf("\n");
	}
	printf("\n\n");
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <=i; j++)
			printf("* ");
		printf("\n");
	}

	printf("\n\n");
	for(int i = 1; i <= 5; i++) {
		for(int j = 10; j <= 9+i; j++)
			printf("%X ", j);
		printf("\n");
	}

	printf("\n\n");
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <=i; j++)
			printf("%d ", 6-j);
		printf("\n");
	}
	return 0;

}
