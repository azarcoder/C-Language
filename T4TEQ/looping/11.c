//if 3 exist, remove and reverse it otherwise just  print
#include<stdio.h>
int main()
{
	int n,r=0,f=0,t;
	scanf("%d",&n); //1234
	t=n; //t=1234
	while(n)
	{
		if(n%10!=3) //1234%10 123%10 12%10 1%10
		{
			r=r*10+n%10; //r=421 
		}
		else
		{
			f=1;	
		} 
		n/=10; //123 12 1
	}
	if(f)
		printf("%d",r);
	else
		printf("%d",t);
}
