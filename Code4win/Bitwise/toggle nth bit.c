//toggle nth bit
#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Enter nth bit to set:");
	scanf("%d",&n);
	int new = num  ^(1 << n);
	printf("After toggled number value: %d",new);
    return 0;
}
//convert 1 into 0 vice versa