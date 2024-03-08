#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	int i, a[100];
	for(i = 0 ; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0 ; i < n; i++)
	{
		if(a[i] > 0 && a[i] <= 10)
		{
			printf("%d ", a[i]);
		}
	}
	getch();
	return 0;
}

