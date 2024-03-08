#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if(a == 0 || b == 0)
	{
		printf("a is equal to 0 or b is equal to 0");
	}
	if(a != 0 && b != 0)
	{
		printf("a is not equal to 0 and b is not equal to 0");
	}
	getch();
	return 0;
}

