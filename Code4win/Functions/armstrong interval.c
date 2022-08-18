#include<stdio.h>
int power();
int armstrong();
void interval();
int main()
{
	int s,e;
	printf("start:");
	scanf("%d",&s);
	printf("end:");
	scanf("%d",&e);
	interval(s,e);
    return 0;
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
	else
		return 0;
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
void interval(int s,int e)
{
	printf("Armstrong number between %d to %d:\n",s,e);
	while(s<=e)
	{
		if(armstrong(s))
			printf("%d,",s);
		s++;
	}
}
