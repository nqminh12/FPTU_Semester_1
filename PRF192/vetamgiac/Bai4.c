#include <stdio.h>

int main() {
	
		int h;
	printf("Enter h: \n");
	
	scanf("%d", &h);
	
	for(int i = 1 ; i <= h ; i++)
	{
		for(int j = 1; j <= h ; j++)
		{
			if(j == 1 || j == i || i == h)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
