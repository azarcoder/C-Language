//sum of odd digit
#include<stdio.h>
int main()
{
	int n,i,s=0,a[10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2!=0)
			s+=a[i];
	}
	printf("%d",s);
}
