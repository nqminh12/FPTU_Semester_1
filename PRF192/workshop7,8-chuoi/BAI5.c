#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	char s[100];
	printf("Enter string: \n");
	scanf("%[^\n]", s);
	int len = strlen(s);
	int i;
	int count = 0;
	if(s[0] == 'a' && s[1] == 'b')
	{
		count++;
	}
	char c = ' ';
	for(i = 0;i < len; i++)
	{
		if(s[i] == c)
		{
			if(s[i + 1] == 'a' && s[i + 2] == 'b')
			{
				count++;
			}
		}
	}
	printf("The number of word that start with 'ab' is:\n");
	printf("%d", count);
	getch();
	return 0;
}

