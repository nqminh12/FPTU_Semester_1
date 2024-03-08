/* Ex 1 */

#include <stdio.h>

int main() {
	float a, b;
	printf("Enter 1st number: \n");
	scanf("%f", &a);
	printf("Enter 2nd number: \n");
	scanf("%f", &b);
	if(a >= b)
	{
		printf("%.1f is the maximum between two numbers.", a);
	}
	else
	{
		printf("%.1f is the maximum between two numbers.", b);
	}
	
	return 0;
}