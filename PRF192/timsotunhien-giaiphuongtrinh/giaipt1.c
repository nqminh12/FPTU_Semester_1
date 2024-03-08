#include <stdio.h>

int main() {
	float a, b;
	printf("Cho phuong trinh ax + b = 0\n");
	printf("Nhap a: \n");
	scanf("%f", &a);
	printf("Nhap b: \n");
	scanf("%f", &b);
	
	if(a == 0 && b != 0)
	{
		printf("Phuong trinh vo nghiem.\n");	
	}
	else if(a == 0 && b == 0)
	{
		printf("Phuong trinh vo so nghiem.\n");
	}
	else
	{
		printf("Phuong trinh co nghiem duy nhat %f\n", -b/a);
		
	}
}
