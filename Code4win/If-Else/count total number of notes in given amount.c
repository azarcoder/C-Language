//count total number of notes in given amount
#include "stdio.h"
int main()
{
	int a;
	int n2000,n500,n200,n100;
	n2000=n500=n200=n100=0;
	
	printf("Enter amount:");
	scanf("%d",&a);
	
	if(a>=2000)
	{
		n2000= a/2000;
		a-=n2000*2000;
	}
	if(a>=500)
	{
		n500= a/500;
		a-=n500*500;
	}
	if(a>=200)
	{
		n200= a/200;
		a-=n200*200;
	}
	if(a>=100)
	{
		n100= a/100;
		a-=n100*100;
	}
	printf("Total number of notes = \n");
    printf("2000 = %d\n", n2000);
	printf("500 = %d\n", n500);
    printf("200 = %d\n", n200);
    printf("100 = %d\n", n100);

}