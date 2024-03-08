#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	
	char s[100];
	printf("Enter string: \n");
	scanf("%s", s);
	char check;
	printf("Enter the element that you want to change: \n");
	scanf("%*c%c", &check);
	char change;
	printf("Enter the element that you want to chang from the above element to: \n");
	scanf("%*c%c", &change);
	int len = strlen(s);
	int i;
	for(i = 0; i < len; i++)
	{
		if(s[i] == check)
		{
			s[i] = change;
		}
	}
	
	printf("%s", s);
	getch();
	return 0;
}

