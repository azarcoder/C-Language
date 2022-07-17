//Calculate profit or loss
#include<stdio.h>
int main()
{
	int b,c,a;
	printf("Enter buying price:");
	scanf("%d",&b);
	printf("Enter selling price:");
	scanf("%d",&c);
	
	if(b<c)
	{
		a=c-b;
		printf("Profit:%d",a);
	}
	else if(b>c)
	{
		a=b-c;
		printf("Loss:%d",a);
	}
	else
		printf("No profit and loss");
}
		
			
