#include <stdio.h>
#include <math.h>
#define MAX 100

int main() {
	int n;
	//nhap
	do
	{
		printf("Nhap n: \n");
		scanf("%d", &n);
		if(n < 0 || n > MAX)
		{
			printf("Vui long nhap lai!\n");
		}
	}while(n < 0 || n > MAX);
	int a[MAX];
	for(int i = 0 ; i < n; i++)
	{
		printf("Nhap a[%d]: \n", i);
		scanf("%d", &a[i]);
	}
	//tinh tong
	int sum = 0;
	for(int i = 0; i < n ; i++)
	{
		if(a[i] / 10 ==5)
		{
			sum += a[i];
			
		}
	}
	
	printf("Tong cac gia tri co chu so hang chuc la 5 la: %d\n", sum);
	
	return 0;
}
