#include <stdio.h>
#include <math.h>
#include <conio.h>
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
	//tinh tong
	float sum = 1;
	int c = 0;
	for(int i = 0; i < n ; i++)
	{
		if(a[i] > 0)
		{
			sum = sum * a[i];
			c++;
		}
	}
	//in 
	
	if(c == 0)
	{
		printf("Mang khong co so duong nao!\n");
	}else{
		printf("Tong cac gia tri co chu so dau tien la chu so chan la: %.2f\n", pow(sum, 1.0/c));
	}
	
	
	getch();
	return 0;
}
