#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	char s[100];
	printf("Enter string: \n");
	scanf("%[^\n]", s);
	char c;
	printf("Enter character that you want to check: \n");
	scanf("%*c%c", &c);
	int len = strlen(s);
	int i;
	int d = 0;
	for(i = 0 ; i < len; i++)
	{
		if(s[i] == c)
		{
			printf("%d  ", i);
			d++;
		}
	}
	if(d == 0)
	{
		printf("%c not exist!\n", c);
	}
	getch();
	return 0;
	
}

