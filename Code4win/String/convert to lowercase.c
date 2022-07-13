//convert to lowercase
#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("Enter text:");
	scanf("%s",a); 
	for(i=0;a[i];i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]=a[i]+32; 
	}
	printf("Lowercase string : %s",a);
	return 0;
}