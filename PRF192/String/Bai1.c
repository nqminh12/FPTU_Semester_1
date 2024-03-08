#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	char str[100];
	scanf("%[^\n]", str);
	printf("%s", str);
	
	getch();
	return 0;
}

