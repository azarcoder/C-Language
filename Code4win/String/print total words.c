//print total words
#include<stdio.h>
int main()
{
	char a[100];
	int i,w=1;
	printf("Enter Text:");
	scanf("%[^\n]",a);
	for(i=0;a[i];i++)
		if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
			w++;
		
	printf("Total Words : %d",w);
	
}