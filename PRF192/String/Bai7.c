#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	char s[100];
	printf("Enter string: \n");
	scanf("%s", s);
	char change;
	printf("Enter the element that you want to chang from the above element to: \n");
	scanf("%*c%c", &change);
	int len = strlen(s);
	int i, t = 0;
	for(i = 1; i < len; i++)
	{
		if(s[i] == change)
		{
			printf("%d", i);
			t = 1;
			break;
		}
	}
	if(t == 0)
	{
		printf("%d", -1);
	}
	getch();
	return 0;
}

