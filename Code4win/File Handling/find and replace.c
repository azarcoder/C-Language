//find and replace
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char f[100],rp[100],a[100],b[100][100];
	int r=0,c=0,i;
	fp=fopen("files/new.txt","r");
	fscanf(fp,"%[^\n]",a);
	printf("%s\n",a);
	printf("Enter a find word:");
	scanf("%s",f);
	printf("Enter a replace word:");
	scanf("%s",rp);
	for(i=0;a[i];i++)
	{
		if(a[i]!=' ')
		{
			b[r][c++]=a[i];
		}
		else
		{
			b[r][c]=0;
			r++;
			c=0;
		}
	}
	b[r][c]=0;
	fclose(fp);
	fp=fopen("files/new.txt","w");
	for(i=0;i<=r;i++)
	{
		if(strcmp(b[i],f)==0)
			fprintf(fp,"%s ",rp);
		else
			fprintf(fp,"%s ",b[i]);
	}
	fclose(fp);
    return 0;
}
