#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	printf("Enter n:  \n");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			sum += i;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}