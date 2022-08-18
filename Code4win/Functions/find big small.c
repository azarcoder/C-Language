//big small
#include<stdio.h>
int big();
int small();
void arrow();
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	arrow();
	printf("%d is biggest",big(x,y,z));
	arrow();
	printf("%d is smallest",small(x,y,z));
    return 0;
}
void arrow()
{
	printf("\n------------\n");
}
int big(int x ,int y,int z)
{
	return x>y&&x>z?x:y>z?y:z;
}
int small(int a,int b, int c)
{
	return a<b&&a<c?a:b<c?b:c;
}
