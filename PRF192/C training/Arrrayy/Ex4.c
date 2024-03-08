#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int n;
	int a[100];
	scanf("%d", &n);
	int i;
	for(i = 0 ; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0 ; i <n ; i++)
	{
		if(a[i] % 2== 0)
		{
			printf("%d ", a[i]);
		}
	}
	getch();
	return 0;
}

