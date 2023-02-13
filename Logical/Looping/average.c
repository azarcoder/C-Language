#include<stdio.h>
int main()
{
	int n,a[100],s=0,i;
	float avg;
	for(scanf("%d",&n),i=0;i<n;scanf("%d",&a[i++]));
	for(i=0;i<n;i++)s+=a[i];
	avg = s/n;
	printf("sum:%d avg:%f",s,avg);
	return 0;
}