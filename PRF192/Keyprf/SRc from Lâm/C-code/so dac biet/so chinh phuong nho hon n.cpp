#include<stdio.h>
#include<conio.h>
#include<math.h>
/*
    S? ch�nh phuong l� s? m� k?t qu? khai can b?c 2 l� 1 s? nguy�n
    sqrt(4) = 2.00000 => �p v? nguy�n = 2 => v� 2.000  == 2 (true) => l� s? ch�nh phuong
    sqrt(5) = 2.23234 => �p v? nguy�n = 2 => v� 2.4324 != 2 (false) => kh�ng l� s? ch�nh phuong
    */
bool KiemTraChinhPhuong(int n)
{
    return sqrt(float(n)) == (int)sqrt((float)n);
}

void LietKeChinhPhuong(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(KiemTraChinhPhuong(i) == true)
            printf("%4d", i);
    }
}
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    LietKeChinhPhuong(n);

    getch();
    return 0;
}
