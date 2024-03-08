#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	float n;
	scanf("%f", &n);
	if(n >= 0 && n <= 10)
	{
		printf("The score is valid");
	}else{
		printf("The score is not valid");
	}
	getch();
	return 0;
}

