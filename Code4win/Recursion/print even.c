//print odd or even series
#include<stdio.h>
void eve();
int main()
{
	int l,u;
	scanf("%d%d",&l,&u);
	eve(l,u);
    return 0;
}
void eve(int l,int u)
{
	if(l>u)
		return;
	printf("%d ",l);
	eve(l+2,u);//odd will print
}