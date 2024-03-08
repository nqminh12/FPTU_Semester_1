#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	int i;
	for(i = n; i <= 100; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d ",i);
		}
	}
	getch();
	return 0;
}

