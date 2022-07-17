//check alphabet or not
#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))
		printf("Alphabet");
	else
		printf("Not Alphabet");
}