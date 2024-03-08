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
	
	float S = 1;
	
	for(int i = 2; i <= n; i++)
	{
		S += (float)1/i;
	}
	
	printf("Tong la: %.3f", S);
}