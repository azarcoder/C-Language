//Lucas upto n
#include<stdio.h>
int main()
{
	int i,a=3,b=-1,c,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		
	}
    return 0;
}
