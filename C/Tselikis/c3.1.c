#include <stdio.h>

int main(void) {

	char	ch;
	int	i;
	float	f;

	printf("Enter a char, an int, and a float: ");
	scanf("%c %d %f", &ch, &i, &f);

	printf("%c, %d, %.2f\n", ch, i, f);

	return 0;
}
