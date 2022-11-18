//Source Code Print
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen(__FILE__,"r");
	if(fp==NULL)
	{

		printf("Can't open");
		exit(1);
	}
	
	while((c=fgetc(fp))!=EOF)
	{
		if(isupper(c))
			c=tolower(c);
		else if(islower(c))
			c=toupper(c);
		putchar(c);
	}
	fclose(fp);
    return 0;
}
