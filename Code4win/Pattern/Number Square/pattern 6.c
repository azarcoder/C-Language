/*
10101
01010
10101
01010
10101
*/
#include <stdio.h>

int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i%2==0)
                printf("%d",(j+1)%2);
            else
                printf("%d",j%2);
        }
        printf("\n");
    }
    
    
}

