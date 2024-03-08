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
	int d = 0;
	for(int i = 0; i < n ; i++)
	{
		d = a[i];
		for(int j = d; j > 0; j /= 10)
		{
			d = j;
		}
		if(d % 2 ==0)
		{
			sum += a[i];
		}
	}
	
	printf("Tong cac gia tri co chu so dau tien la chu so chan la: %d\n", sum);
	
	return 0;
}
