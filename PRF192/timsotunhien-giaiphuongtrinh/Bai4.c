#include <stdio.h>

int main() {
	int sum;
	for(int i = 1; i > 0; i++)
	{
		sum += i;
		if(sum >= 10000)
		{
			printf("So nguyen duong n can tim la: %d\n", i);
			break;
		}
	}
}