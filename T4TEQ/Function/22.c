#include<stdio.h>

char* adam(int n)
{
	int s=0,t=0,r=0,sqt=0,temp,rev=0;
	t=n*n;
	while(t)
	{
		r=r*10+t%10;
		t/=10;
	}
	//finding root 
	sqt = r/2;
	temp =0;
	while(sqt!=temp)
	{
		temp=sqt;
		sqt=(r/temp+temp)/2;
	}
	while(sqt)
	{
		rev=rev*10+sqt%10;
		sqt/=10;
	}
	if(rev==n)
		return "Adam";
	else
		return "Not Adam";
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%s",adam(n));
	
}
