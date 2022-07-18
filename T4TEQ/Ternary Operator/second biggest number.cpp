#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf(a>b&&a<c||a<b&&a>c?"a is correct":b>a&&b<c||b<a&&b>c?"b is correct":"c is correct");
}
