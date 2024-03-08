#include <stdio.h>

int main() {
	int n, sum;
	do{
		printf("Nhap so tu nhien n: \n");
		scanf("%d", &n);
		if(n < 0 )
		{
			printf("n khong hop le. Yeu cau kiem tra lai!\n");
		}
	}while(n < 0);
	for(int i = 0; i <= n; i++)
	{
		if(i % 7 == 0)
		{
			sum += i;
		}
	}
	
	printf("Tong cac so tu nhien khong lon hon %d va chia het cho 7 la:\n%d", n, sum);
}