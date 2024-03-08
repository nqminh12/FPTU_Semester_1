/* Ex 14 */

#include <stdio.h>

int main() {
	float a, b;
	
	printf("Enter cost price: \n");
	scanf("%f", &a);
	printf("Enter selling price: \n");
	scanf("%f", &b);
	
	float d;
	d = b - a;
	
	if(d > 0)
	{
		printf("Profit: %.1f", d);
	}
	else
	{
		printf("Loss: %.1f", -d);
	}
	
	return 0;
	
}