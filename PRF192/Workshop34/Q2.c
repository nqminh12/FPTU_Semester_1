#include <stdio.h>

int main() {
	
	double a, b;
	
	printf("Enter a: \n");
	scanf("%lf", &a);
	
	printf("Enter b: \n");
	scanf("%lf", &b); 

	double c = a * b;
	int d = c * 1000;
	if((d != 10) >= 5)
	{
		c += 0.01;
	}

	printf("The area of the rectangular with 2 decimal places is: %.2lf\n", c);
	
	return 0;
}

