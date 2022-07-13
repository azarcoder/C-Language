//Toggle case of each character in a string
#include<stdio.h>
void tg(char * a);
int main()
{
	char a[100];
	int i;
	printf("Enter text:");
	scanf("%s",a); 
	printf("String before toggling case: %s\n",a);
	tg(a);
	printf("String after toggling case: %s",a);
	return 0;
}
void tg(char * a)
{
	int i=0;
	while(a[i])
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]=a[i]+32;
		else if(a[i]>='a' && a[i]<='z')
			a[i]=a[i]-32;
		i++;  
	}
}
	