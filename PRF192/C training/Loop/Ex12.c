#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int n;
	scanf("%d", &n);
	int i;
	int s = 0;
	
	for(i = 0 ;i <= n; i++)
	{
		if(i % 2 == 1)
		{
			s += i;
		}
	}
	
	printf("%d", s);
	getch();
	return 0;
}

