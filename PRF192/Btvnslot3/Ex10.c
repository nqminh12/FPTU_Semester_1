/* Ex 10 */

#include <stdio.h>

int main() {
	int month;
	printf("Enter month: \n");
	scanf("%d", &month);
	
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d has 31 days", month);
			break;
		
		case 2:
			printf("%d has 29 days if this year is leap\nHas 28 days if this year is not leap", month);
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d has 30 days", month);	
			break;	
		default:
			printf("Not define");	
	}
	return 0;
}