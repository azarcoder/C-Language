//right rotate 
#include<stdio.h>
#define SIZE 10
void rotate();
void printee();
int main()
{
	int n,a[SIZE],i,r;
	for(i=0;i<SIZE;scanf("%d",&a[i]),i++);
	scanf("%d",&r);
	r=r%SIZE;
	for(i=0;i<r;i++)
		rotate(a);
	printee(a);
    return 0;
}
void rotate(int a[])
{
	int i,l;
	l=a[SIZE-1];
	for(i=SIZE-1;i>0;i--)
		a[i]=a[i-1];
	a[0]=l;
}
void printee(int a[])
{
	for(int i=0;i<SIZE;i++)
		printf("%d ",a[i]);
}