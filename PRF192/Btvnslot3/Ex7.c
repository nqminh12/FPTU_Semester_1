/* Ex 7 */ 
#include <stdio.h>

int main() {
	char n;
	printf("Enter character: \n");
	scanf("%c", &n);
	
	if(n >= 'a' && n <= 'z')
	{
		printf("%c is alphabet.", n);
	}
	else if( n > 'A' && n < 'Z')
	{
		printf("%c is alphabet.", n);
	}
	else
	{
		printf("%c is not alphabet.", n);
	}
	
	return 0;
}