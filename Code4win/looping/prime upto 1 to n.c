//prime upto n
#include<stdio.h>
int main()
{
	int f,i,e,j;
	scanf("%d",&e);
	for(i=2;i<=e;i++)
	{
		f=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=0;
				break;
			}
		}
		if(f==1)
			printf("%d ",i);
	}
	return 0;
}
