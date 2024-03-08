#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

void lower(char s[])
{
	int len = strlen(s);
	int i ;
	for(i = 0 ; i < len; i++)
	{
		if(s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] -= 32;
		}
	}
}

int main() {
	char s1[100];
	printf("Enter name 1st: \n");
	scanf("%s", s1);
	char s2[100];
	printf("Enter name 2nd: \n");
	scanf("%s", s2);
	lower(s1);
	lower(s2);
	
	if(strcmp(s1,s2) == 0)
	{
		printf("Two people have the same name!\n");
	}
	else
	{
		printf("Two people don't have the same name!\n");
	}
	getch();
	return 0;
}

