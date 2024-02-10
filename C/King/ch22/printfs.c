#include <stdio.h>

#define WIDTH 10
#define PERCISION 3

int main(void) {


	printf("|%s|%s|\n", "bogus", "buzzword");
	printf("|%6s|%6s|\n", "bogus", "buzzword");
	printf("|%-6s|%-6s|\n", "bogus", "buzzword");
	printf("|%.4s|%.4s|\n", "bogus", "buzzword");
	printf("|%6.4s|%6.4s|\n", "bogus", "buzzword");
	printf("|%-6.4s|%-6.4s|\n", "bogus", "buzzword");

	
	printf("|%-*s|%-*s|\n", 6, "bogus", 6, "buzzword");
	printf("|%.*s|%.*s|\n", 4, "bogus", 4, "buzzword");
	printf("|%*.*s|%*.*s|\n", 6, 4, "bogus", 6, 4, "buzzword");
	printf("|%-*.*s|%-*.*s|\n", WIDTH, PERCISION, "bogus", WIDTH, PERCISION, "buzzword");

	return 0;
}
