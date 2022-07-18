#include <stdio.h>
int main()
{
    int n,i,j,k,g;
    scanf("%d",&n);
    for(i=1;i<=n;printf("\n"),i++)
    {
        for(g=n;g>=i;printf(" "),g--);
        for(j=i;j;printf("%d ",j--%2)); 
    }
}




