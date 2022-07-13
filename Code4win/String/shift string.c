//shift string
#include<stdio.h>
int main()
{
	char a[6];
	int n;
	scanf("%s",a);
	scanf("%d",&n); 
	printf(a+n);//a is first position --> + n(5)  a[0]+5 -->a[5] so it will print from a[5] to end of null
	a[n]=0; //a[5]=0 so program starts from 0 to 5
	printf(a);
}
//Helloworld 5 --> WorldHello
//Azarudeen 5 -->deenAzaru