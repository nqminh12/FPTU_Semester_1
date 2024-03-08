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
	int i,j, c;
	for(i = 0 ; i < len; i++)
	{
		for(j = i + 1; j < len;j++)
		{
			if(s[i] > s[j])
			{
			c = s[i];
			s[i] = s[j];
			s[j] = c;
			}
		}
	}
	printf("String after sorting is: \n");
	printf("%s", s);
	getch();
	return 0;
}

