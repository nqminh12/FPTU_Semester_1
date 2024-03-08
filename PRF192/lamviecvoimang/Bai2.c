#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100

int main() {
	int n;
	//nhap n
	do
	{
		printf("Nhap n: \n");
		scanf("%d", &n);
		if(n < 0 || n > MAX)
		{
			printf("Vui long nhap lai!\n");
		}
	}while(n < 0 || n > MAX);
	
	//nhap arr
	float a[MAX];
	for(int i = 0 ; i < n; i++)
	{
		printf("Nhap a[%d]: \n", i);
		scanf("%f", &a[i]);
	}
	//nhap x
	float x;
	printf("\nNhap gia tri x de xoa khoi mang: \n");
	scanf("%f", &x);
	
	for(int i = 0 ;i < n ; i++)
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
	
	
	printf("Mang sau khi xoa phan tu x: \n");
	
	for(int i = 0 ; i < n ;i++)
	{
		printf("%4.2f   ", a[i]);
	}
	                  
	getch();
	return 0;         
}