#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {

	float fahr, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahr);

	celsius = (fahr - FREEZING_POINT) * SCALE_FACTOR;

	printf("Celsius equivalent is: %.1f\n", celsius);	

	return 0;
}
