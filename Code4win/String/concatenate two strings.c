//concatenate two strings
#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i,j;
	printf("Enter text 1:");
	scanf("%s",a); //azaru
	printf("Enter text 2:");
	scanf("%s",b);	//deen
	i=0;
	while(a[i])
	{
		i++; //a limit = 5
	}
	j=0;
	while(b[j])
	{
		a[i]=b[j]; //azaru azarud azarude azarudee azarudeen
		printf("%s ",a);
		i++; //5+1 = 6 7 8 9 
		j++; //b limit =4
	}
	a[i]=0; 
	printf("Concatenated string = %s",a);
	return 0;
}