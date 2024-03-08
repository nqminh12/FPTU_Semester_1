/* Ex 15 */

#include <stdio.h>

int main() {
	int a,b,c,d,e;
	
	printf("Enter mark of Physics: \n");
	scanf("%d", &a);
	printf("Enter mark of Chemistry: \n");
	scanf("%d", &b);
	printf("Enter mark of Biology: \n");
	scanf("%d", &c);
	printf("Enter mark of Mathematics: \n");
	scanf("%d", &d);
	printf("Enter mark of Computer: \n");
	scanf("%d", &e);
	
	float per = (a + b + c + d + e) / 5.0;
	
	printf("Percentage = %.2f\n", per);
	
	if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
	
	
	return 0;
}