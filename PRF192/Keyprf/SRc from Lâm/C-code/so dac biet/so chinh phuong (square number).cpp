#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, n;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);

       if(n <= 0)
           printf("\nn phai > 0. Xin nhap lai !");

    }while(n <= 0);
    /*S? ch�nh phuong l� s? m� k?t qu? khai can b?c 2 l� 1 s? nguy�n
    sqrt(4) = 2.00000 => �p v? nguy�n = 2 => v� 2.000  == 2 (true) => l� s? ch�nh phuong
    sqrt(5) = 2.23234 => �p v? nguy�n = 2 => v� 2.4324 != 2 (false) => kh�ng l� s? ch�nh phuong*/
    if (sqrt((float)n) == (int)sqrt((float)n))  // So s�nh 2 s? khi chua �p v? ki?u nguy�n v� s? d� �p v? ki?u nguy�n
    {
        printf("\n%d La so chinh phuong", n);
    }
    else
    {
        printf("\n%d Khong la so chinh phuong", n);
    }

    getch();
    return 0;
}
