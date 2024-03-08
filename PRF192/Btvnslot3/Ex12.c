/* Ex 11=2 */

#include <stdio.h>

int main() {
	float a,b,c;
	printf("Enter 3 sides of a triangle: \n");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a + b > c && a + c > b && b + c > a)
	{
		printf("Triagle is valid");
	}
	else
	{
		printf("Triagle is not valid");
	}
	
	return 0;
}