#include <stdio.h>

int main(void) {

	printf("|%d|\n", 123);
	printf("|%8d|\n", 123);
	printf("|%08d|\n", 123);
	printf("|%-8d|\n", 123);
	printf("|%+8d|\n", 123);
	printf("|%+-8d|\n", 123);
	printf("|%- 8d|\n", 123);
	printf("|%+08d|\n", 123);
	printf("|% 08d|\n", 123);

	printf("|%8o|\n", 173);
	printf("|%#8o|\n", 173);

	printf("|%8x|\n", 173);
	printf("|%#8x|\n", 173);
	
	printf("|%8g|\n", 123.0);
	printf("|%#8g|\n", 123.0);

	
	return 0;

}
