//count vovel and constant
#include<stdio.h>
int main()
{
	char a[100];
	int i,v=0,c=0;
	printf("Enter Text:");
	scanf("%s",a);
	//length
	for(i=0;a[i];i++)
	{
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		{
			if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
			   a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
				v++;
			else
				c++;
		}
	}
	printf("Total Vowels : %d\n",v);
	printf("Total constant : %d",c);
}