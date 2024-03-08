#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("The biggest is:\n");
	if( a >= b && a >= c)
	{
		printf("%d", a);
	}else if(b > c)
	{
		printf("%d", b);
	}else{
		printf("%d", c);
	}
	getch();
	return 0;
}

