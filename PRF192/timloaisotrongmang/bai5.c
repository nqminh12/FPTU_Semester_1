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
	
	float sum = 0;
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			sum += a[i];
		}
	}
	
	printf("tong cac gia tri am trong mang mot chieu la: %.2f\n", sum);
	return 0;
}

