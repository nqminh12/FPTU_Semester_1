#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100

int checkfull(char list[MAX][21], int *pn) {
	return ((*pn) == MAX);
}

int checkempty(char list[MAX][21], int *pn) {
	return ((*pn) == 0);
}
//nhap ten 
void add(char list[MAX][21], int *pn) {
	char hs[21];
	int i, t;
	t = 1;
	printf("Add a student : ");
	fflush(stdin);
	scanf("%20[^\n]", hs);
	//viet hoa
	for(i = 0 ; i < strlen(hs); i++)
	{
				hs[i ] -= 32;
	}
	
    strcpy(list[*pn], hs);
    (*pn)++;
    printf("Added!\n");
}
void removed(char list[MAX][21], int *pn)
{
	printf("Which Name you want to removed?(index) : ");
	int re, i;
	scanf("%d", &re);
	if (re >= 0 && re < *pn) {
	for (i = re + 1; i < *pn; i++)
		strcpy(list[i-1], list[i]);
	printf("Removed!\n");
	(*pn)--;
	} else printf("UnRemoved!\n");
}

void search(char list[MAX][21], int *pn)
{
	int i;
	printf("Searching for(Enter name with uppercase) : ");
	char hs[21];
	fflush(stdin);
    scanf("%20[^\n]", &hs);
    int t = 0;
	for (i = 0; i < *pn; i++)
		{
			if(strcmp(hs,list[i]) == 0)
			{
				printf("RESULT : Name[%d] : %s\n", i, list[i]);
				t = 1;
			}
		}
	if(t == 0)
	{
		printf("Not found!\n");
	}
}

void print(char list[MAX][21], int *pn)
{
	int i;
	for (i = 0; i < (*pn); i++)
		{
			printf("Name[%d] : %s \n", i, list[i]);
		}
}

//thuc hien
int main() {
    char c;
    printf("1-Add a student\n");
    printf("2-Remove a student\n");
    printf("3-Search a student\n");
    printf("4-Print the list in ascending order\n");
    printf("5-Quit\n");
    char list[MAX][21];
    int n = 0;
    int t = 1;
    do
    {
        printf("Choice = ");
    	fflush(stdin);
    	scanf("%c", &c);
        switch(c)
        {
            case '1':
				if (checkfull(list, &n)) printf("Impossible to add!\n");
				else add(list, &n);
				break;
            case '2':
				if (checkempty(list, &n)) printf("Impossible to remove!\n");
				else removed(list, &n);break;
            case '3':
				if (checkempty(list, &n)) printf("Nothing to search!\n");
				else search(list, &n);
				break;
            case '4':
				if (checkempty(list, &n)) printf("Nothing to print!\n");
				else print(list, &n);
				break;
            case '5':
				printf("Quit");
				t = 0;
				break;
        }
       if (c < '1'  || c >'5') printf("1 to 5 only!\n");
    } while (t == 1);
    return 0;
}


