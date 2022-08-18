#include<stdio.h>
int prime();
int armstrong();
int perfect();
int power();
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	prime(n)==1?printf("prime\n"):printf("Not prime!\n");
	perfect(n)==1?printf("perfect\n"):printf("Not perfect!\n");
	armstrong(n)==1?printf("Armstrong\n"):printf("Not armstrong!\n");
    return 0;
}
int prime(int n)
{
	int i,f=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			f=0;
	}
	if(f==1)
		return 1;
}
int perfect(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			s+=i;
	}
	if(s==n)
		return 1;
}
int armstrong(int n)
{
	int t=n,og=n,c,s=0,a;
	for(c=0;t;c++,t/=10);
	for(int i=0;i<c;i++)
	{
		a=n%10;
		s+=power(a,c);
		n/=10;
	}
	if(s==og)
		return 1;
}
int power(int b,int p)
{
	int i=1,s=1;
	while(i<=p)
	{
		s*=b;
		i++;
	}
	return s;
}
