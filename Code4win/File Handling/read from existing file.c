//read from existing file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char s;
	fp=fopen("files/smaple.txt","r");
	if(fp==NULL)
	{

		printf("Can't open");
		exit(1);
	}
	do{
		s=getc(fp);
		putchar(s);
	}while(s!=EOF);
    return 0;
}
