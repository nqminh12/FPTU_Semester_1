#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;

    printf("\nNhap n: ");
    scanf("%d", &n);

    // C�u a:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j < n - i + 1) ? " " : "*", 234);
        }
        putchar('\n');
    }



    // C�u b:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "*" : " ", 234);
        }
        putchar('\n');
    }
    printf("\n");
    
    // C�u c: 
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j <= i) ? "*" : " ", 234);
        }
        printf("\n\n");
    }

    // C�u d
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j == i || j == 1 || i == n) ? "*" : " ");
        }
        printf("\n");
    }

     
    getch();
    return 0;
}
