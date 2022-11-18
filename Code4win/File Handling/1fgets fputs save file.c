//fgets fputs save file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char s[100];
	fp=fopen("files/smaple.txt","w");
	if(fp==NULL)
	{

		printf("Can't open");
		exit(1);
	}
	fgets(s,10,stdin);//if give 10 it will take 9 char as input
	fputs(s,fp);
	fclose(fp);
	printf("file created:)");
    return 0;
}
