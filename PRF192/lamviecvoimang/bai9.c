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
	//nhap x
	float x;
	printf("Nhap gia tri x: \n");
	scanf("%f", &x);
	
	//tinh tong
	float sum = 0;
	int c = 0;
	for(int i = 0; i < n ; i++)
	{
		if(a[i] > x)
		{
			sum += a[i];
			c++;
		}
	}
	
	if(c == 0)
	{
		printf("Mang khong gia tri nao lon hon %.2f!\n", x);
	}else{
		printf("Tong cac gia tri lon hon x trong mang 1 chieu la: %.2f\n", sum/c);
	}
	
	
	
	return 0;
}
