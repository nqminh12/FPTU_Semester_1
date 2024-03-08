#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int i;
	for(i = 1; i <= 1000; i++)
	{
		if(i % 10 == 0)
		{
			printf("%d ", i);
		}
	}
	getch();
	return 0;
}

