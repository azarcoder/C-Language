//strrev
#include<stdio.h>
int main()
{
	char a[100]={"T4TEQ"},b[100];
	int i,j,k=0;
	for(i=0;a[i];i++);
	for(j=i-1;j>=0;j--)
		b[k++]=a[j];
	b[k]=0;
	printf(b);	

    return 0;
}
