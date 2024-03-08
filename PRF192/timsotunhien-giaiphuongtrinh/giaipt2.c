#include <stdio.h>

int main() {
	float x;
	printf("Nhap x: \n");
	scanf("%f", &x);
	float i = 0;
	
	if(x >= 5)
	{
		i = 2 * x * x + 5 * x + 9;
	}
	else
	{
		i = -2 * x * x + 4 * x - 9;
	}
	
	printf("Gia tri cua ham so f(x) la: %f\n", i);
}