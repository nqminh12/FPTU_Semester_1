#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	float a, b ,c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	int root1, root2;
	int d = b*b - 4 * a * c;
	if(d  = 0)
	{
		printf("root1 = root2 = %f", -b/(2*a));
	} else if( d > 0)
	{
		root1 = (-b + sqrt(d))/(2*a);
		root2 = (-b - sqrt(d))/(2*a);
		printf("root1 = %f", root1);
		printf("root2 = %f", root2);
	} else 
	{
		int r1 = sqrt(-d)/(2*a);
		int r2 = -b/(2*a);
		
		printf("root1 = %f + %f i", r2, r1);
		printf("root2 = %f - %f i", r2, r1);
	}
	getch();
	return 0;
}

