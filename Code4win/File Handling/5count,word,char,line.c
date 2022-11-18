//fgets fputs save file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char c;
	int w,ch,l;
	w=c=l=0;
	fp=fopen("files/smaple.txt","r");
	if(fp==NULL)
	{

		printf("Can't open");
		exit(1);
	}
	while((c=fgetc(fp))!=EOF)
	{
		ch++;
		if(c=='\n' || c=='\0')
			l++;
		if(c==' ' || c=='\n' || c=='\0' ||c=='\t')
			w++;
	}
	//increment words and lines for last word
	if(ch>0)
	{
		w++;
		l++;
	}
	printf("characters:%d\tWords:%d\tLines:%d",ch,w,l);
    return 0;
}
