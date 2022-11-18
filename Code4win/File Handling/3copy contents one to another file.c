//3copy contents one to another file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp2;
	char c;
	fp=fopen("files/smaple.txt","r");
	fp2=fopen("files/copy.txt","w");
	if(fp==NULL || fp2==NULL)
	{

		printf("Can't open");
		exit(1);
	}
	c=getc(fp);
	while(c!=EOF)
	{
		fputc(c,fp2);
		c=getc(fp);
	}
	
	fclose(fp);
	fclose(fp2);
    return 0;
}
