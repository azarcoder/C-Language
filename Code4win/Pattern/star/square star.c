/*
*****
*****
*****
*****
*****
Square Star pattern
*/

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
		for(j=1;j<=n;printf("*"),j++);
	
}
