#include <stdio.h>

long long int fact(int n);

int main(void) {
	int n = 0;

	printf("Enter n factorial: ");
	scanf("%d", &n);

	printf("%lld\n", fact(n));
	return 0;
}

long long int fact(int n) {
	while (n >= 1) {
		return n * fact(n-1);
	}
	return 1;
}
