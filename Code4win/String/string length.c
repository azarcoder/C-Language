//string length
#include<stdio.h>
int main()
{
	char a[30];
	int i;
	scanf("%s",a);
	for(i=0;a[i];i++); //when a[i] will null, automatically for loop become false.
		printf("%d",i);
}