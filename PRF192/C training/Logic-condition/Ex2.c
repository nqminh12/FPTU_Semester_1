#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	if(n > 0)
	{
		printf("n is a positive number");
		
	} else if(n < 0)
	{
		printf("n is a negative number");
	}else{
		printf("n is equal to 0");
	}
	getch();
	return 0;
}

