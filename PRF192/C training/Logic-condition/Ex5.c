#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	if(n <= 100 && n >= 10)
	{
		printf("%d is in range (10;100)", n);
	}else{
		printf("%d is not in range (10;100)", n);
	}
	getch();
	return 0;
}

