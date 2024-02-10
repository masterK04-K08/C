#include <stdio.h>

int main(void) {

	int i;
	float x;

	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	  //    |40|   40|40   |  040|

	printf("|%10.3f|%10.3e|%-10g|", x, x, x);	
	 //     |   830.210| 8.392e+02|839.21    |

	return 0;
}
