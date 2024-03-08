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

	printf("So chan co trong mang la: \n");
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 )
		{
			printf("%d \n", a[i]);
		}
	}
	
	
	return 0;
}

