#include <stdio.h>

int fact(int n) {

	if(n == 0 || n ==1)
		return 1;
	else
		return n * fact(n-1);

}

int main(void) {

	printf("%d\n", fact(5));

	return 0;
}
