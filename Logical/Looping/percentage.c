#include<stdio.h>
int main()
{
	int scored,total_mark;
	float p;
	scanf("%d/%d",&scored,&total_mark);
	p=(float)scored / total_mark * 100.00;
	printf("%.2f%%",p);
	return 0;
}