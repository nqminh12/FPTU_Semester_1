#include <stdio.h>


//kiemtranam
int leapyear(int y)
{
	int Check;
	Check = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    return Check;
}

//kiemtrathang
int Dayofmonth(int m, int y)
{
    int dayofmonth;
    int Check = leapyear(y);
    switch(m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        dayofmonth = 31;
        break;
    case 4: case 6: case 9 : case 11:
        dayofmonth = 30;
        break;
    case 2:
        if(Check == 1)
        {
            dayofmonth = 29;
        }
        else
        {
            dayofmonth= 28;
        }
    }
    return dayofmonth;
}

//ngay tiep theo
void Nextday(int d, int m, int y)
{
    int dayofmonth = Dayofmonth(m, y);
    if (d < dayofmonth)  
    {
        d++;
    }
    else if (m < 12)     
    {
        d = 1; m++;
    }
    else                      // Ngay k? la ??u n?m m?i t?c la hi?n tai ?ang la thang 12
    {
        d = 1;
        m = 1;
        y++;
    }
    printf("\nDate of tomorow: %d %d %d ", d, m, y);
}

int main()
{
    int d, m, y;
    printf("\nEnter year: ");
    scanf("%d", &y);
    do
    {
        printf("\nEnter month: ");
        scanf("%d", &m);
        if (m < 1 || m > 12)
            printf("\nThe month that you enter is wrong. Please check again!");
    }while(m < 1 || m > 12);

    int dayofmonth = Dayofmonth(m, y);
    do
    {
        printf("\nEnter day: ");
        scanf("%d",&d);
        if(d < 1 || d > dayofmonth)
        {
            printf("\nThe day that you enter is wrong. Please check again!");
        }
    }while(d < 1 || d > dayofmonth);
    
    Nextday(d, m, y);

    return 0;
}
