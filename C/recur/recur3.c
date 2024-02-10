#include <stdio.h>

int recur_add(int n);

int main(void) {
	int n = 10;	
	printf("%d\n", recur_add(n));

	return 0;
}

int recur_add(int n){

	while(n>=1) 
		return n + recur_add(n-2);
	return 0;	
}
