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
	int j, c;
	for(i = 0 ; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] >= a[j])
			{
				c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	for(i = 0 ; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	getch();
	return 0;
}

