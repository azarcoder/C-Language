//reverse array element
#include<stdio.h>
int main()
{
	int a[10],n,i,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=n;i>0;i--)
		printf("%d ",a[i]);
}