#include <stdio.h>

int main(void) {

	float i = 3.54f, j = 6.78f, tmp;

	tmp = i;
	i = (int)j + (i - (int)i);
	j = (int)tmp + (j - (int)j);

	printf("%.2f %.2f\n", i, j);

	return 0;
}
