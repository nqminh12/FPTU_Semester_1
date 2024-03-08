//tam giac can dac
#include <stdio.h>
int main()
{
    int i, j, n;

    printf("\nNhap n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "%c" : " ", 234);
        }
        putchar('\n');
    }
    printf("\n");
}
