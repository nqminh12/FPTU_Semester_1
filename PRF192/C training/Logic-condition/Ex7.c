#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX 100

int main() {
	int a;
	scanf("%d", &a);
	char c;
	fflush(stdin);
	scanf("%c", &c);
	int b;
	scanf("%d", &b);

	switch(c)
	{
		case '+':
			printf("%d", a + b);
			break;
		case '-':
			printf("%d", a - b);
			break;
		case '*':
			printf("%d", a * b);
			break;
		case '/':
			printf("%d", a / b);
			break;
	}
	getch();
	return 0;
}

