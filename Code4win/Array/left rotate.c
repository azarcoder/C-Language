//left rotate 
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
	int i,f;
	f=a[0];
	for(i=0;i<SIZE-1;i++)
		a[i]=a[i+1];
	a[SIZE-1]=f;
}
void printee(int a[])
{
	for(int i=0;i<SIZE;i++)
		printf("%d ",a[i]);
}