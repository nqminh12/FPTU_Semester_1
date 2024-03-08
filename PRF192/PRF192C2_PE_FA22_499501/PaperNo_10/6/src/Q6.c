#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  char s[100];
  gets(s);
  int len = strlen(s);
  int count = 0;
  
  if(s[len - 1] == 'a' && s[len - 2] == 'l')
  {
  	count++;
  }
  int i;
  
  for(i = 0 ; i < len; i++)
  {
  	if(s[i] == 'l' && s[i + 1] == 'a' && s[i + 2] == ' ')
  	{
  		count++;
	  }
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	printf("%d", count);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
