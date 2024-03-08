#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (float a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

void LietKeTrongDoanXY(float a[], int n, float x, float y)
{
    for(int i = 0; i < n; i++)
    {
        if(x <= a[i] && a[i] <= y)
        {
            printf("\n%8.3f", a[i]);
        }
    }
}
int main()
{
    int n;
    float a[MAX];
    float x, y;
    printf("\nNhap x: ");
    scanf("%f", &x);

    printf("\nNhap y: ");
    scanf("%f", &y);
    nhap(a, n);
    xuat(a, n);

    printf("\nCac so trong mang thuoc [%.3f, %.3f] la: ", x, y);
    LietKeTrongDoanXY(a, n, x, y);

    getch();
    return 0;
}
