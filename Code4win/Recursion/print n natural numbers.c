//print n natural numbers
#include<stdio.h>
void nat();
int main()
{
	int l,u;
	scanf("%d%d",&l,&u);
	nat(l,u);
    return 0;
}
void nat(int l,int u)
{
	if(l>u)
		return;
	printf("%d ",l);
	nat(l+1,u);
}