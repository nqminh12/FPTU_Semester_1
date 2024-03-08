#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	int c, i;
	if(a >= b)
	{
		c = a;
		a = b;
		b = c;
	}
	int sum = 0;
	for(i = a; i <= b;i++)
	{
		sum += i;
	}
	printf("%d", sum);
	
	getch();
	return 0;
}

