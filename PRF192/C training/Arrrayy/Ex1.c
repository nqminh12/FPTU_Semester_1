#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int i;
	int a[100];
	for(i = 0; i< 10;i++)
	{
		scanf("%d", &a[i]);
	}
	int sum = 0;
	for(i = 0; i< 10;i++)
	{
		sum += a[i];
	}
	printf("%d", sum);
	getch();
	return 0;
}

