#include <stdio.h>

void non_tail(int i) {

	if (i > 0) {
		non_tail(i - 1);
		printf("%d", i);
		non_tail(i - 1);
	}
}

int main(void) {


	non_tail(3);

	return 0;
}
