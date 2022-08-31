//strcat
#include<stdio.h>
int main()
{
	char a[100]={"T4TEQ"},b[100]={"Trichy"};
	int i,j;
	for(i=0;a[i];i++);
	for(j=0;b[j];j++)
		a[i++]=b[j];
	a[i]=0;
	printf(a);
    return 0;
}
