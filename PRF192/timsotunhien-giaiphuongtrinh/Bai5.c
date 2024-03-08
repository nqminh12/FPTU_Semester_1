#include <stdio.h>

int main() {
	int N;
	do{
		printf("Nhap so tu nhien N: \n");
		scanf("%d", &N);
		if(N < 0 )
		{
			printf("N khong hop le. Yeu cau kiem tra lai!\n");
		}
	}while(N < 0);
	int sum = 0;
	int m = 0;
	
	while(sum < N)
	{
		m++;
		sum += m;
	}
	printf("So nguyen duong can tim la: %d",m - 1);
	
	
}