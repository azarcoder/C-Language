//mean - same as average
#include<stdio.h>
int main()
{
	int n,i,s,a[100];
	for(i=0,s=0,scanf("%d",&n);i<n;scanf("%d",&a[i]),s+=a[i],i++);
	printf("%f",s/(float)n);
	return 0;
}