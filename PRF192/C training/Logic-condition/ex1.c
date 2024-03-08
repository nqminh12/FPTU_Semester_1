#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	if(n % 2 == 0)
	{
		printf("n is an even number");
	}else {
		printf("n is an odd number");
	}
	getch();
	return 0;
}

