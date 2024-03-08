#include <stdio.h>


int main() {
	int n;
	do{
		printf("Nhap so tu nhien n: \n");
		scanf("%d", &n);
		if(n < 0 )
		{
			printf("n khong hop le. Yeu cau kiem tra lai!\n");
		}
	}while(n < 0);
	int S1 = 0, S2 = 0, S3 = 0;
	
	for(int i = 0; i <= n; i++)
	{
		S1 += i;
	}
	
	for(int i = 0 ; i <= n; i++)
	{
		if(i % 2 != 0)
		{
			S2 += i;
		}
	}
	for(int i = 0 ;i <= n; i++)
	{
		if(i % 2 == 0)
		{
			S3 += i;
		}
	}
	
	printf("Tong cac so tu nhien lon hon %d la: %d\n", n, S1);
	printf("Tong cac so tu nhien le lon hon %d la: %d\n", n, S2);
	printf("Tong cac so tu nhien chan lon hon %d la: %d\n", n, S3);
	
	return 0;
	
}