//element reverse in array
#include <stdio.h>
int main()
{
int n[50],s,i,r,j;
scanf("%d",&s);
for(i=1;i<=s;i++)
scanf("%d",&n[i]);
for(i=1;i<=s;i++)
{
    for(r=0;n[i];r=r*10+n[i]%10,n[i]/=10);
    n[i]=r;
}
for(i=1;i<=s;i++)
	printf("%d ",n[i]);
}