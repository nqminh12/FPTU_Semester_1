/* Ex 2 */

#include <stdio.h>

int main() {
	float a, b, c;
	printf("Enter 1st number: \n");
	scanf("%f", &a);
	printf("Enter 2nd number: \n");
	scanf("%f", &b);
	printf("Enter 3th number: \n");
	scanf("%f", &c);
	
	if (a >= b && a >= c)
		printf("%.1f is the maximum between three numbers.", a);		
	if (b >= a && b >= c)
		printf("%.1f is the maximum between three numbers.", b);			
	if (c >= b && c >= a)
		printf("%.1f is the maximum between three numbers.", c);	
			
	
	
	return 0;
}