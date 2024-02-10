#include <stdio.h>

int main(void) {

	int i = 9, j = 8, k = 10, max;

/*	if (i > j)
		if (i > k)
			max = i;
		else
			max = k;
	else
		if (j > k)
			max = j;
		else
			max = k;
*/	
	printf("%d ", i > j ? (i > k ? i : k) : (j > k ? j : k)); //onliner of above
	printf("%d %d %d\n", i, j, k);
	
	return 0;
}
