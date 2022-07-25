#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	for(;n;r=r*10+n%10,n/=10);
	printf("%d",r);	
    return 0;
}
