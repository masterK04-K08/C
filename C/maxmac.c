#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

int main(void) {

	int x = 9, y = 3;

	float pi = 3.14, fi = 5.22;

	double d1 = 125.333333333333333, d2 = 999.99999;

	int maxi = max(x,y);
	float maxf = max(pi, fi);
	double maxd = max(d1, d2);

	printf("%d\t%.2f\t%.*lf", maxi, maxf, 5,  maxd);

	return 0;
}
