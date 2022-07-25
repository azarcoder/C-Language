#include<stdio.h>
int main()
{
	int n,i,s=1;
	scanf("%d",&n);
	for(i=1;n;i++,n/=10)
		s*=(n%10); //s=s*(n%10)
	printf("%d",s);
    return 0;
}
