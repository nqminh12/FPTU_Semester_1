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
	float a[MAX];
	for(int i = 0 ; i < n; i++)
	{
		printf("Nhap a[%d]: \n", i);
		scanf("%f", &a[i]);
	}
	
	//Them x
	float x;
	printf("\nNhap gia tri x de xoa: \n");
	scanf("%f", &x);
	
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == x)
		{
			for(int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			i--;
			n--;
		}
	}
	//xuat mang
	printf("Mang sau khi xoa cac so am la: \n");
	for(int i = 0 ; i < n; i++)
	{
		printf("%4.2f    ", a[i]);
	}
	return 0;
}
