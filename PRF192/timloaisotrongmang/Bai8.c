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
	

	int c = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			printf("gia tri duong dau tien trong mang la: %d\n", a[i]);
			c = 1;
			break;
		}
	}
	
	if(c == 0)
	{
		printf("\n%d", -1);
	}
	
	
	return 0;
}