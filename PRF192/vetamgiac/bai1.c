#include <stdio.h>


int main() {
	int h;
	printf("Enter h: \n");
	
	scanf("%d", &h);
	int i,j;
	for(i = 1 ; i <= h ; i++)
	{
		for(j = 1; j <= h + i - 1; j++)
		{
			if(j < h - i + 1)
			{
				printf(" ");
			}
			else 
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}

