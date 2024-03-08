#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	//nhap 
	char s[100];
	printf("Enter string: \n");
	scanf("%[^\n]", s);
	int len = strlen(s);
	int i;
	char c = ' ';
	//check phan tu dau
	if(s[0] <= 'z' && s[0] >= 'a')
		s[0] -= 32;
	//check phan tu khac
	for(i = 0 ; i < len; i++)
	{
		if(s[i] == c)
		{
			if(s[i + 1] <= 'z' && s[i + 1] >= 'a')
				s[i + 1] -= 32;
		}
	}
	printf("The string after convert is: \n");
	printf("%s", s);
	getch();
	return 0;
}

