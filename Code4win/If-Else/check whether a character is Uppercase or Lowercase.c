//check whether a character is Uppercase or Lowercase
#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>='a' && a<='z')
		printf("Lowercase");
	else if(a>='A' && a<='Z')
		printf("Upper case");
	else
		printf("Not an Alphabet");
}