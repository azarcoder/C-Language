//sum of last digit
#include<stdio.h>
int main()
{
	int n,i,s=0,a[10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i]%10;
	}
	printf("%d",s);
}
