#include <stdio.h>

int main() {
	
		int m, n;
	
	printf("Nhap chieu dai: \n");
	scanf("%d", &m);
	
	printf("Nhap chieu rong: \n");
	scanf("%d", &n);
	int i, j;
	for(i = 1; i <= n; i++)
	{
		for( j = 1; j <= m; j++ )
		{
			if(i == 1 || i == n || j == 1 || j == m )
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		
		}
		printf("\n");
	}
	
	
	return 0;
}
