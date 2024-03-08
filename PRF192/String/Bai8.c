#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	char s[100];
	printf("Enter string: \n");
	scanf("%s", s);
	int len = strlen(s);
	int i ;
	printf("The string after change to uppercase is: \n");
	for(i = 0 ; i < len; i++)
	{
		if(s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] -= 32;
		}
	}
	printf("%s", s);
	getch();
	return 0;
}

