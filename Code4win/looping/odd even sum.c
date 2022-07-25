#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	//print odd
	//for(i=1;i<=n;i+=2)
		//printf("%d \n",i);
	//print even
	int s=0;
	for(i=2;i<=n;i+=2)
	{
		s+=i;
	}
	printf("%d",s);
}