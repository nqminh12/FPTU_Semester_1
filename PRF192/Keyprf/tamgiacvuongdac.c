#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int h;
	scanf("%d", &h);
	int i, j;
	for(i = 1; i <= h; i++)
	{
		for(j = 1; j <= h; j++)
		{
			if(j <= h - i)
			{
				printf(" ");
				
			}else{
				printf("*");
			}
		
		}
		printf("\n");
	}
	getch();
	return 0;	
}
