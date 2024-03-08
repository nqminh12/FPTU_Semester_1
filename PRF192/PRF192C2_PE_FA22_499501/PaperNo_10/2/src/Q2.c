#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  int c;
  if(a > b)
  {
  	c = a;
  	a = b;
  	b = c;
  }
  int i, p = 1;
  for(i = a; i <= b; i++)
  {
  	if(i % 2 == 1)
  	{
  		p *= i;
	  }
  }
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", p);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
