/* Ex 11=2 */

#include <stdio.h>

int main() {
	float a,b,c;
	printf("Enter 3 sides of a triangle: \n");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a == b && c == b && a == c)
	{
		printf("The triagle is equilateral");
	}
	else if (a == b || a == c || c == b)
	{
		printf("The triagle is isosceles.");
	}
	else 
	{
		printf("The triagle is scalene triangle.");
	}
	
	return 0;
}