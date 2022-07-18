//first occurrence
#include <stdio.h>
int main()
{
    int n[50],c=0,s,i,j;
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    	scanf("%d",&n[i]);
    scanf("%d",&j); //search element
    for(i=1;i<=s;i++)
    {
    	if(n[i]==j)
    		break;
	}
    printf("%d",i-1==s?-1:i);
    return 0;
}

