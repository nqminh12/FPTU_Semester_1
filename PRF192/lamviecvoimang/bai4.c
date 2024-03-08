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
	
	//xap sep
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i + 1; j < n; j++)
			{
				if(a[i] > a[j])
				{
					int c = a[i];
					a[i] = a[j];
					a[j] = c;
				}
			}
	}
	printf("Mang sau khi sap xep la: \n");
	for(int k =0 ; k < n ; k++)
	{
		printf("%4.2f  ", a[k]);
	}
	
	//Them x
	float x;
	printf("\nNhap gia tri x de them vao mang: \n");
	scanf("%f", &x);
	
	//tim vi tri cua x
	int e;
	
	for(int l =0; l < n; l++)
	{
		if(a[l] <= x)
		{
			e = l;}	
	}
	
	if(e >0)
	{
		for(int m = n - 1; m >= e;m--)
	{
		a[m + 1] = a[m];
	}
	n++;
	a[e + 1] = x;
	}else{
		for(int m = n - 1; m >= e;m--)
	{
		a[m + 1] = a[m];
	}
	n++;
	a[e] = x;
	}
	//xuat mang moi
	printf("\nMang sau khi sap xep la: \n");
	for(int i = 0 ; i < n; i++)
	{
		printf("%4.2f   ", a[i]);
	}
	
	return 0;
}
