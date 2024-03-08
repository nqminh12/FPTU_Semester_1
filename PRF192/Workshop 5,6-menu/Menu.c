#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define MAX 100

//check so phan tu mang
int checkfull(float *a, int *n) {
	return ((*n) == MAX);
}

int checkempty(float *a, int *n) {
	return ((*n) == 0);
}

void option1(float *a, int *n)             //option 1
{
	float value;
	printf("Input an added value : ");
	scanf("%f", &value);
	a[*n] = value;
	(*n)++;
	printf("%.2f has been entered into the array!\n\n", value);
}

void option2(float * a, int *n)       //option 2
{
	float value;
	printf("Input the searched value : ");
	scanf("%f", &value);
	printf("Value at : ");
	
	int i,j = 0;
	for (i = 0; i < (*n); i++)
		if (a[i] == value) 
			{
				j = 1;
				printf("%d  ", i);
			}
	if (j == 0) printf("Not found\n");	
	printf("\n\n");
}

void option3(float * a, int *n)              //option 3
{
	int i;
	for (i =0 ; i < (*n); i++)
	{
		printf("%3.4f  ", a[i]);
	}
	printf("\n\n");
}

void option4(float * a, int * n)             //option 4
{
	float minVal, maxVal;
	printf("Enter the minVal: \n");
	scanf("%f", &minVal);
	printf("Enter the maxVal: \n");
	scanf("%f", &maxVal);
	if (minVal > maxVal ) 
	{
		float k = minVal;
		minVal = maxVal;
		minVal = k;
	}
	int i;
	for (i = 0; i < (*n); i++)
	{
		if (a[i] >= minVal && a[i] <= maxVal) printf("%3.2f  ", a[i]);
	}
	printf("\n\n");
}

int main()
{
	printf("1- Add a value\n");
	printf("2- Search a value\n");
	printf("3- Print out the array \n");
	printf("4- Print out the array in rages\n");
	printf("Other - Quit\n\n");
	int n = 0;
	float * a[MAX];
	int t = 0;
	char luachon;
	do {
		printf("Select [1..4] : ");
		fflush(stdin);
		scanf("%c", &luachon);
		switch (luachon) 
		{
			case '1':
				if (checkfull(a, &n))
					printf("Array is full\n\n");
				else 	
					option1(&a, &n);
				break;
			case '2':
				if (checkempty(a, &n)) 
					printf("Array is empty\n\n");
				else
					option2(a,&n);
				break;
			case '3':
				if (checkempty(a, &n)) 
					printf("Array is empty\n\n");
				else 
					option3(a, &n);
				break;
			case '4':
				if (checkempty(a, &n)) 
					printf("Array is empty\n\n");
				else 
					option4(a, &n);
				break;
			default: 
				t = 1;
				printf("You choose quit the program, bye bye!");
		}
	} while (t == 0);
	
	getch();
	return 0;
}
