#include"stdio.h"
int main()
{
	int a[10],n,i,r,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	for(i=1;i<=n;i++) //inside loop i  value assigned to j n times
	{
		j=a[i]; 
    	for(r=0;j;r=r*10+j%10,j/=10);
    	printf("%d ",r);
	}	
}