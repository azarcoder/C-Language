//4merge 2 files to thrid file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp2,*fp3;
	char c;
	fp=fopen("files/smaple.txt","r");
	fp2=fopen("files/copy.txt","r");
	fp3=fopen("files/merged.txt","w");
	if(fp==NULL || fp2==NULL||fp3==NULL)
	{

		printf("Can't open");
		exit(1);
	}
	while((c=getc(fp))!=EOF)
	{
		fputc(c,fp3);
	}
	while((c=getc(fp2))!=EOF)
	{
		fputc(c,fp3);
	}
	fclose(fp);
	fclose(fp2);
	fclose(fp3);
    return 0;
}
