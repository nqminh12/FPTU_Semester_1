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
	
	float min;
	int c = 0;
	for(int i = 0; i < n; i++)
	{
		if((a[i] > 0))
		{
			min = a[i];
			c = 1;
			break;
		}
	}
	if(c == 0)
	{
		printf("%d\n", -1);
	}
	
	for(int i = 0; i < n; i++)
	{
		if((a[i] > 0) && (a[i] < min))
		{
			min = a[i];
		}
	}
	
	if(c = 1)
	{
		printf("Gia tri duong nho nhat la: %.2f\n", min);
	}
	return 0;
}

