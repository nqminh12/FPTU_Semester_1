#include <stdio.h>
#define MAX 100

int main() {
	int a[MAX];
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
		scanf("%d", &a[i]);
	}
	
	int min = a[0];
	
	for(int i = 0; i < n; i++)
	{
		if(min > a[i])
		{
			min = a[i];
		}
	}
	
	printf("The min value of an array is: %d\n", min);
	return 0;
}

