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
	printf("The string has ");
	printf("%d element!", len);
	getch();
	return 0;
}

