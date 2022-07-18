#include<stdio.h>
int main()
{
	char s[100];
	int i,k,j=0,l;
	scanf("%[^\n]",s);
	for(l=0;s[l];l++);
	for(i=0;i<=l;i++)
	{
		if(s[i]==' ' || i==l)
		{
			for(k=i-1;k>=j;k--)
				printf("%c",s[k]);
			j=i+1;
			printf(" ");
		}
	}
}
	
