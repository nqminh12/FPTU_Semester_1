#include <stdio.h>


int main() {
	
	int h;
	printf("Enter h: \n");
	
	scanf("%d", &h);//nhap gia tri
	
	int i, j;
	
	for(i = 1 ; i <= h ; i++)
	{
		for(j = 1; j <= h ; j++)
		{
			if(j <= i)
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


