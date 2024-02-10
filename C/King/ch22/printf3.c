#include <stdio.h>

int main(void) {

	printf("|%8d|%8d|\n", 123, -123);
	printf("|%-8d|%-8d|\n", 123, -123);
	printf("|%+8d|%+8d|\n", 123, -123);
	printf("|%08d|%08d|\n", 123, -123);
	printf("|%+-8d|%+-8d|\n", 123, -123);
	printf("|% -8d|% -8d|\n", 123, -123);
	printf("|%+08d|%+08d|\n", 123, -123);
	printf("|% 08d|% 08d|\n", 123, -123);

	// octal hex
	printf("|%8o|%8o|\n", 123, 123.0);
	printf("|%#8o|%#8o|\n", 123, 123.0);
	printf("|%8x|%8x|\n", 123, 123.0);
	printf("|%#8x|%#8x|\n", 123, 123.0);
	
	
	printf("|%8g|%8g|\n", 123, 123.0);
	printf("|%#8g|%#8g|\n", 123, 123.0);
	
	printf("|%#8g|\n", 123.0);

	return 0;
}
