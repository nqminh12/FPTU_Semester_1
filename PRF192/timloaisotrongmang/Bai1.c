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
	
	
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Enter a[%d]: \n",  i);
		scanf("%f", &a[i]);
	}
	
	float max = a[0];
	
	for(i = 0; i < n; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	
	printf("The max value of an array is: %.2f\n", max);
	return 0;
}

