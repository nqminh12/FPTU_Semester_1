/* Ex 11 */

#include <stdio.h>

int main() {
	float a,b,c;
	printf("Enter angles of a triangle: \n");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a + b + c == 180)
	{
		printf("Triagle is valid");
	}
	else
	{
		printf("Triagle is not valid");
	}
	
	return 0;
}