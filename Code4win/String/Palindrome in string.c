//Palindrome in string
#include<stdio.h>
int main()
{
	char a[30],b[30];
	int i,f=1,l;
	scanf("%s",a);
	for(l=0;a[l];l++); //string length
	for(i=0;i<l/2;i++)
	{
		if(a[i]!=a[l-i-1])
		{
			f=0;
			break;	
		}
	}
	if(f)printf("Palindrome");
	else printf("Not Palindrome");
}

/*

M A L A Y A L A M
0 1 2 3 4 5 6 7 8  len=8

if(a[i]!=a[l-i-1])

a[0]==a[9-0-1]==a[8]==> M -- M True
a[1]==a[9-1-1]==a[7]==> A -- A True
a[2]==a[9-2-1]==a[6]==> L -- L True
a[3]==a[9-3-1]==a[5]==> A -- A True

*/