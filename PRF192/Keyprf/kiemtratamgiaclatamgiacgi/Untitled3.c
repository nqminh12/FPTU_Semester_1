#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;

    printf("\nNhap n: ");
    scanf("%d", &n);

    // Cau a:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j < n - i + 1) ? " " : "%c", 234);
        }
        putchar('\n');
    }



    // Cau b:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "%c" : " ", 234);
        }
        putchar('\n');
    }
    printf("\n");
    // Cau c: 
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j <= i) ? "%c" : " ", 234);
        }
        printf("\n\n");
    }

    // Cau d
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

