//C program to find perimeter of a rectangle
// formula of perimeter = 2(l+w)
#include<stdio.h>
int main()
{
	int l,w,p;
	scanf("%d%d",&l,&w);
	p=2*(l+w);
	printf("Perimeter of rectangle : %d",p);
}