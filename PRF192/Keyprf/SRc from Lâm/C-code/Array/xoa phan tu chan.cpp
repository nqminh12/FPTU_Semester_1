#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
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
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

void Xoa1PhanTu(int a[], int &n, int ViTriXoa)
{
    for(int i = ViTriXoa; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void XoaCacSoChan(int a[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            Xoa1PhanTu(a, n, i);
            i--;
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    int ViTriXoa;
    nhap(a, n);
    xuat(a, n);

    XoaCacSoChan(a, n);
    printf("\nMang sau khi xoa tat cac cac gia tri chan: ");
    xuat(a, n);
    getch();
    return 0;
}
