//strcpy
#include<stdio.h>
int main()
{
	char a[100]={"T4TEQ"},b[100];
	int i;
	for(i=0;a[i];i++)
	{
		b[i]=a[i];
	}
	b[i]=0;
	printf(b);
    return 0;
}
