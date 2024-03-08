#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	char c;
	char str[100];
	printf("Enter string: \n");
	scanf("%s", str);
	printf("Enter character that you want to check: \n");
	scanf("%*c%c", &c);
	int len = strlen(str);
	int i, count = 0;
	for(i = 0 ; i < len; i++)
	{
		if(str[i] == c)
		{
			count++;
		}
	}
	printf("%c appears %d time in %s", c,count, str);
	getch();
	return 0;
}

