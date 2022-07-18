//find prime numbers untill n numbers and reverse it
#include<stdio.h>
int main()
{
	int n,i,f,t=2,r,s;
	scanf("%d",&n);
	while(t<=n)
	{
		i=2;f=1;
		while(i<=t/2)
		{
		if(t%i==0)
		{
			f=0;
			break;
		}
		i++;
		}
		if(f)
		{
			s=t;
			r=0;
			while(s)
			{
				r=r*10+s%10;
				s/=10;
			}
			printf("%d ",r);
		} 
		
		t++;
	}
	
	return 0;
}
