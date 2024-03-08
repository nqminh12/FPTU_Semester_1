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
	for(i = 0; i < len; i++)
	{
		if(s[i] == 'e' || s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||s[i] == 'E' || s[i] == 'A' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
		{
			count++;
		}
	}
	printf("The number of vowel is: \n");
	printf("%d", count);
	getch();
	return 0;
}

