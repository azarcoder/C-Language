//1 to n perfect number
#include<stdio.h>
int main()
{
	int i,n,s,e,j;
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				s+=j;
		}
		if(s==i)
			printf("%d ",i);
	}
    return 0;
}