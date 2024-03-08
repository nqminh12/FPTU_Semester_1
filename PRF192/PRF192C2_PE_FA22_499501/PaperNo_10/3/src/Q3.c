#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[100];
  int i, j,c;
  for(i = 0 ; i < 6; i++)
  {
  	scanf("%d", &a[i]);
  }
  for(i = 0 ; i < 6; i++)
  {
  	for(j = i; j < 6;j++)
  	{
  		if(a[i] >= a[j])
  		{
  			c = a[i];
  			a[i] = a[j];
  			a[j] = c;
		  }
	  }
  }
  
  
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = 0 ;i < 6; i++)
  {
  	if(a[i] > 0)
  	{
  		printf("%d\n", a[i]);
	  }
  }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
