#include <stdio.h>

int main ()
{
int i, n, k, j;
printf ("Nhap n: "); scanf ("%d", &n);
for ( i = n; i > 1; i --)
{
printf ("\n");
for (j = i - 1; j > 0; j --)
printf (" ");
printf ("*");
for (k = i-j -1; k < n-2; k ++)
printf (" ");
if (i < n)
printf ("*");
}
printf ("\n");
for (i = 0; i < n; i ++)
printf ("*");
return 0;
}
