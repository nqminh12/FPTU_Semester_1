//tam giac can rong
#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, n;

    printf("\nNhap n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "*" : " ", 234);
        }
        putchar('\n');
    }
    printf("\n");
}
