/* Ex 3 */

#include <stdio.h>

int main() {
	float a;
	printf("Enter number: \n");
	scanf("%f", &a);
	
	if(a == 0)
		printf("%.1f is zero.", a);
	else if(a < 0)
		printf("%.1f is negative.", a);
	else
		printf("%.1f is positive.", a);
	
	return 0;
}