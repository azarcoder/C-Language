//prime interval
#include<stdio.h>
void pp();
int prime();
int main()
{
	int l,u;
	printf("Enter lower:");
	scanf("%d",&l);
	printf("Enter upper:");
	scanf("%d",&u);
	pp(l,u);
    return 0;
}
int prime(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void pp(int l,int u)
{
	printf("Prime number between %d to %d:\n",l,u);
	while(l<=u)
	{
		if(prime(l))	
			printf("%d,",l);
		l++;
	}	
}

