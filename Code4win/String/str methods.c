//str methods
#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	printf("Enter 1st string:");
	scanf("%[^\n]",a);
	printf("Enter 2st string:");
	scanf(" %[^\n]",b);
	//printf("%d",strlen(a)); --> length
	//printf(strrev(a)); --> reverse
	//strcpy(b,a);printf(b); --> strcpy
	//strcat(a,b);printf(a); -->strcat
	//strcmp(a,b)==0?printf("same"):printf("not same"); -->strcmp
    return 0;
}
