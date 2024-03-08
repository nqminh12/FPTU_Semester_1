#include <stdio.h>


int main() {
	
	int m, n;
	
	printf("Nhap chieu dai: \n");
	scanf("%d", &m);
	
	printf("Nhap chieu rong: \n");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++ )
		{
			printf("*  ");
		}
		printf("\n");
	}
	return 0;
}
