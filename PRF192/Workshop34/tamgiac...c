#include <stdio.h>


int main() {
	
	//nhap số hàng ngang
	int h;
	do
	{
		printf("Enter a number of rows: \n");
		scanf("%d", &h);
		if(h < 0 || h > 20)
		{
			printf("The number that you enter is wrong. Please enter again!\n");
		}
	}while(h < 0 || h >20);
	
	//
   int   k = 0;
   int count = 0;
   int count1 = 0;
   
   for (int i = 1; i <= h; i++) {
   	//xet khoang trong
      for (int j = 1; j <= h - i; j++) {
         printf("  ");
         count++;
      }
    //xet so
      while (k != 2 * i - 1) {
         if (count <= h - 1) {
            printf("%d ", i + k);
            count++;
         } else {
            count1++;
            printf("%d ", (i + k - 2 * count1));
         }
         k++;
      }
    //reset
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}