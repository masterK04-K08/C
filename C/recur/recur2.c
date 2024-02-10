#include <stdio.h>

int digiadd(int n);

int main(void) {

	unsigned int n = 0;

	print("Enter n: ");
	scanf("%d\n", &n);
	
	digiadd(n);

	return 0;
}

int digiadd(int n) {
	
	return (n % 10) + digiadd(n -(n%10)
	
}
