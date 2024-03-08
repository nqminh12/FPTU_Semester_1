#include <stdio.h>
#define MAX 100

int sohoanthien(int n)
{
	int sum = 0;
	for(int i = 1 ; i < n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	if(sum == n)
	{
		return 1;
	}
	
	return 0;
}



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
	
	int c = 0;
	
	for(int i = n - 1; i >= 0; i--)
	{
		if(sohoanthien(a[i]) == 1)
		
		{
			printf("Vi tri so hoan thien cuoi cung cua mang mot chieu cac so nguyen la: %d\n", i);
			c = 1;
			break;
		}
	}
	
	if(c == 0)
	{
		printf("\n%d\n", -1);
	}
	return 0;
}
