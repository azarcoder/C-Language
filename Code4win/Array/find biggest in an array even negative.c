//find biggest in an array even negative
#include<stdio.h>
int main()
{
	int n,i,a[10],b=0;
	scanf("%d%d",&n,&a[1]);
	b=a[1];
	for(i=2;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(b<a[i])
			b=a[i];
	}
	printf("%d",b);
}
