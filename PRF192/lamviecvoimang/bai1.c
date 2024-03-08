#include"stdio.h"
#define MAX 1000


void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
	printf ("Nhap mang a[%d]:\n",i);
    scanf("%d",&a[i]);
	}
}

void  xuatmang (int a[],int n){
	for(int i=0;i<n;i++){
	printf ("%4d",a[i]);
	}
}

void chen(int a[],int n,int k, int val){
	for( int i=n-1;i>k;i--){
		a[i]=a[i - 1];
	}
	a[k]=val;
	n++;
}


int main (){
	int a [MAX];
	int n;
	do
	{
		printf("Nhap n: \n");
		scanf("%d", &n);
		if(n < 0 || n > MAX)
		{
			printf("Vui long nhap lai!");
		}
	}while(n < 0 || n > MAX);
	
	nhapmang(a,n);
	
	printf("Truoc khi nhap mang:\n");
	xuatmang(a,n);
	
	int val,k;
	printf ("\nNhap gia tri can chen:\n");
	scanf("%d",&val);
	
	do
	{
		printf("Nhap vi tri can chen!\n");
		scanf("%d", &k);
		if(k < 0 || k > n)
		{
			printf("Vui long nhap lai!\n");
		}
	}while(k < 0 || k > n);
	
	chen(a,n ,k,val);
	xuatmang(a,n);
}