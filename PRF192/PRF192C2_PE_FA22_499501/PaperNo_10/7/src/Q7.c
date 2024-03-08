#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
  scanf("%d", &n);
  int str[100];
  int a[100];
  int i, j,k;
  for(i = 0; i < n; i++)
  {
  	scanf("%d", &a[i]);
  }
  
  for(i = 0 ;i < n; i++)
	{
		str[i] = 1;
		for(j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				str[i]++;
				for(k = j; k < n; k++)
				{
					a[k] = a[k + 1];
				}
				n--;
				j--;
			}
		}
	}
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	for(i = 0 ; i < n; i++)
	{
		if(a[i] % 2 == 1 && str[i] == 2)
		{
			printf("%d\n", a[i]);
		}
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
