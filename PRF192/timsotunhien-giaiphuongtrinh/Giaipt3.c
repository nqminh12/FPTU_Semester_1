#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	
	printf("Cho phuon trinh bac 2: ax^2 + bx + c = 0.\n");
	printf("Nhap a: \n");
	scanf("%f", &a);
	printf("Nhap b: \n");
	scanf("%f", &b);
	printf("Nhap c: \n");
	scanf("%f", &c);
	
	if(a == 0)
	{
		if(b == 0 && c ==0)
		{
			printf("Phuong trinh co vo so nghiem.\n");
		}
		else if(b == 0 && c != 0)
		{
			printf("Phuong trinh vo nghiem.\n");
		}
		else
		{
			printf("Phuong trinh co nghiem duy nhat la %f.\n", -c/b);
		}
	}
	else
	{
		float x1 , x2;
		float delta = b * b - 4 * a * c;
		if(delta == 0)
		{
			x1 = -b/(2 * a);
			printf("Phuong trinh co nghiem duy nhat %f", x1);
		}
		else if (delta < 0)
		{
			printf("Phuong trinh vo nghiem.");
		}
		else
		{
			delta = sqrt(delta);
        	x1 = (-b + delta) / (2*a);
        	x2 = (-b - delta) / (2*a);
			printf("Phuong trinh co 2 nghiem phan biet %f va %f \n", x1, x2);
		}
		
	}
	return 0;
}





