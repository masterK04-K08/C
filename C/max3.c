#include <stdio.h>

int max3(int, int, int);

int main(void) {

	int x, y, z;
	
	printf("Enter x: ");
	scanf("%d", &x);

	printf("Enter y: ");
	scanf("%d", &y);

	printf("Enter z: ");
	scanf("%d", &z);

	printf("%d\n", max3(x, y, z));

	return 0;
}

int max3(int x, int y, int z) {

	return x > (y > z ? y : z) ? x : (y > z ? y : z);

}
