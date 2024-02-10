#include <stdio.h>

int main(void) {

	int a[] = {1, 3, 3, 7, 17, 21, 49, 90};

	int first=0, mid, last=sizeof(a)/sizeof(int)-1;
	int x = 101;

	while (first <= last) {
		mid = (first + last)/2;
		if (x < a[mid])
			last = mid - 1;
		else
			if (x > a[mid])
				first = mid + 1;
			else
				break;
	}

	if (first <= last)
		printf("Found x at position %d\n", mid);
	else
		printf("x not in array\n");

	return 0;
}
