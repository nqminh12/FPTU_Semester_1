#include <stdio.h>
#include <math.h>
#define MAX 100




int kiemtranguyento(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}



int main() {
	int a[MAX];
	int n;
	do
	{
		printf("Enter number of elements in array: \n");
		scanf("%d", &n);
		if(n < 0)
		{
			printf("The number that you enter is wrong. Please enter again!\n");
		}
	}while(n < 0);
	
	for(int i = 0; i < n; i++)
	{
		printf("Enter a[%d]: \n",  i);
		scanf("%d", &a[i]);
	}
	

	int c = 0;
	for(int i = 0; i < n; i++)
	{
		if((kiemtranguyento(a[i]) == 1) && (a[i] < 100))
		{
			c++;
		}

	}
	
	printf("So luong so nguyen to nho hon 100 co trong mang la: %d\n", c);
	
	return 0;
}

