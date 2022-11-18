//append and read
#include<stdio.h>
#include<stdlib.h>
void readfile(FILE* fp);
int main()
{
	FILE *fp;
	char s[100];
	fp=fopen("files/smaple.txt","a");
	if(fp==NULL)
	{

		printf("Can't open");
		exit(1);
	}
	fflush(stdin);
	fgets(s,10,stdin);
	fputs(s,fp);
	//reopen
	fp=freopen("files/smaple.txt","r",stdin);
	readfile(fp);//function
	fclose(fp);
    return 0;
}
void readfile(FILE * fp)
{
	char c;
	do{
		c=getc(fp);
		putchar(c);
	}while(c!=EOF);
}
