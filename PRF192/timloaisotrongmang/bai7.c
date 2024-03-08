#include <stdio.h>
#define MAX 100

int main() {
	float a[MAX];
	int n;
	do
	{
		printf("Enter number of elements in array: \n");
		scanf("%d", &n);
		if(n < 0)
		{
			printf("the number that you enter is wrong. Please enter again!\n");
		}
	}while(n < 0);
	
	for(int i = 0; i < n; i++)
	{
		printf("Enter a[%d]: \n",  i);
		scanf("%f", &a[i]);
	}
	
	printf("Cac vi tri ma tai do la gia tri am trong mang la: \n");
	

	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
