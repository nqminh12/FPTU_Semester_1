#include <stdio.h>


int main() {
	
	//nhap n
	int n;
	do
	{
		printf("Enter the number of element in the array: \n");
		scanf("%d", &n);
		if(n < 0 || n >= 10)
		{
			printf("The number that you enter is wrong. Please enter again!\n");
		}
	}while(n < 0 || n >= 10);
	
	//nhap mang
	int a[100];
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	//xu li
	int j;
	int k;
	for (i = 0; i < n; i ++) {  
        for ( j = i + 1; j < n; j++) {   
            if ( a[i] == a[j]){  
                if(a[i] % 2 != 0 || a[j] % 2 != 0) {
                	for (k = j; k < n - 1; k++)  {  
                    	a[k] = a[k + 1];  
                	}   
                	n--;  
                	j--;      
            	}  
        	}  
		}
    }  
    
    printf ("\nAfter remove odd duplicate: \n");  
    for (
	i = 0; i < n; i++)  {  
        printf (" %d\n", a[i]);  
    }  
	
	return 0;
}
