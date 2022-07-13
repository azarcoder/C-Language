//copy one string to another
#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i;
	printf("Enter text 1:");
	scanf("%s",a);
	for(i=0;a[i];i++)
	{
		b[i]=a[i];
	}
	b[i]=0;
	printf("First string %s:\n",a);
	printf("Second string %s:\n",b);
	printf("Total characters copied %d",i);
}