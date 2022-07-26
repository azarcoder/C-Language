//strong number 1 to n
#include<stdio.h>
int main()
{
	int j,i,l,en,c,st;
	long long s,f;
	scanf("%d%d",&st,&en);
	for(i=st;i<=en;i++)
	{
	c=i;
	s=0;
	while(c)
	{
		f=1ll;
		l=c%10;
		for(j=1;j<=l;j++)
		{
			f*=j;
		}
		s+=f;
		c/=10;
	}
	if(s==i)
		printf("%d ",i);
	}
	return 0;
}
