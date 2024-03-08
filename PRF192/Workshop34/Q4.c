#include <stdio.h>

int main() {
	
	//nhap n
	int N;
	do
	{
		printf("Enter the number of element in the array: \n");
		scanf("%d", &N);
		if(N < 0 || N > 50)
		{
			printf("The number that you enter is wrong. Please enter again!\n");
		}
	}while(N < 0 || N >= 50);
	
	//nhap mang
	double a[50];
	for(int i = 0; i < N; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%lf", &a[i]);
	}
	
	//nhap x
	double x;
	printf("\nEnter x: \n");
	scanf("%lf", &x);
	
	int count = 0;
	double sum = 0;
	for(int i = 0; i < N; i++)
	{
		if(a[i] > x)
		{
			sum += a[i];
			count++;
		}
	}

	
	double d = sum / count;
	
	
	printf("The average of the elements which are greater than %d is: %.2f", x, d);
		
	return 0;
}
