/*
input n: 5
             *
          *  *  *
       *  *  *  *  *
    *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
    *  *  *  *  *  *  *
       *  *  *  *  *
          *  *  *
             *
*/
#include <stdio.h>
 
int main()
{
    int n;
    printf("input n: ");
    scanf("%d", &n);
 
	int i, j; 
    //thoi2
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
 
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
 
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
 
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}

