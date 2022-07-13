//string reverse
#include<stdio.h>
int main()
{
	char a[30],b[30];
	int i,j;
	scanf("%s",a);
	for(i=0;a[i];i++); //string length
	for(i--,j=0;i>=0;i--,j++)
		b[j]=a[i];
	b[j]=0;
	printf(b);
		
}