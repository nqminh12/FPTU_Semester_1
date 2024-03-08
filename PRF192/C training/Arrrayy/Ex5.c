#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	int i;
	for(i = 0 ; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int k;
	scanf("%d", &k);
	int count = 0;
	for(i = 0 ; i < n; i++)
	{
		if(a[i] == k)
		{
			count++;
		}
	}
	printf("%d", count);
	getch();
	return 0;
}

