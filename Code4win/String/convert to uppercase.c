//convert to uppercase
#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("Enter text:");
	scanf("%s",a); 
	for(i=0;a[i];i++)
	{
		if(a[i]>='a' && a[i]<='z')
			a[i]=a[i]-32; 
	}
	printf("Uppercase string : %s",a);
	return 0;
}