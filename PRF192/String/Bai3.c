#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	char s[100];
	scanf("%[^\n]", s);
	int k;
	scanf("%d", k);
	char c = s[k - 1];
	printf("%c", c);
	getch();
	return 0;
}

