/*
	1		1	
	 2	   2
	  3   3
	   4 4
	    5
	   4 4
	  3   3 
	2       2
   1         1

*/
#include<stdio.h>
int main()
{
	int n,i,j;
	for(i=1,scanf("%d",&n);i<=n;i++)
	{
		for(j=1;j<i;j++)
			printf(" ");
		printf("%d",i);
		
		for(j=1;j<=((n-i)*2-1);j++)
			printf(" ");
		
		if(i!=n)
			printf("%d",i);
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<i;j++)
			printf(" ");
		printf("%d",i);
		
		for(j=1;j<=((n-i)*2-1);j++)
			printf(" ");
		printf("%d",i);
		printf("\n");
	}
    return 0;
}
