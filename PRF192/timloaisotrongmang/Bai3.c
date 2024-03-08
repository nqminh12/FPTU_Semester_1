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
	

	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 2004)
		{
			printf("Mang ton tai gia tri nho hon 2004!\n");
			count = 1;
			break;
		}
	}
	
	if(count == 0)
	{
		printf("Trong mang khong co gia tri nao nho hon 2004!");
	}
	
	
	return 0;
}

