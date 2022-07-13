//count num,alphabets,special chars
#include<stdio.h>
int main()
{
	char n[100];
	int a,d,o,i;
	a=d=o=i=0;
	printf("Enter Text:");
	scanf("%s",n);
	while(n[i])
	{
		if(n[i]>='a' && n[i]<='z' ||n[i]>='A' && n[i]<='Z')
			a++;
		else if (n[i]>='0' && n[i]<='9')
			d++;
		else
			o++;
		i++;
	}
	printf("Alphabets : %d\n",a);
	printf("Decimal : %d\n",d);
	printf("Special Characters : %d\n",o);
}