#include <stdio.h>

int main() {
	int a, b, k, n, i;
	while(n <= 0) {
		scanf("%d", &n);
	}
	for(k = 1; k <= n-1; k++) printf(" ");
	printf("*\n");
	
	i = 2;
	while(i <= n -1) {
		a = n-i;
		for(k = 1; k <= a; k++) printf(" ");
		printf("*");
		b = 2*i-3;
		for(k = 1; k <= b; k++) printf(" ");
		printf("*\n");
		i++;
	}
	printf("*");
	for(k = 1; k <= n*2-3; k++) printf(" ");
	printf("*\n");
	
	
	i = n-1;
	while(i >= 2) {
		a = n-i;
		for(k = 1; k <= a; k++) printf(" ");
		printf("*");
		b = 2*i-3;
		for(k = 1; k <= b; k++) printf(" ");
		printf("*\n");
		i--;
	}
	for(k = 1; k <= n-1; k++) printf(" ");
	printf("*");
	return 0;
}
