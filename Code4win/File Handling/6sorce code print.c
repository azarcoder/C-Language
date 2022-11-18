//source code print
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char c;
//	fp2=fopen(__FILE__,"r");
	fp=fopen("6sorce code print.c","r");
	if(fp==NULL)
	{

		printf("Can't open");
		exit(1);
	}
	while((c=fgetc(fp))!=EOF)
		putchar(c);
	fclose(fp);
    return 0;
}
