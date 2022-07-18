//word replace
#include<stdio.h>
int main()
{
    char a[50],b[50],c[50];
    int l1,l2,i,k=0,j,f=0,n,m;
    scanf("%[^\n]",a);
    scanf("%s",b);
    scanf("%s",c);
    for(l1=0;a[l1];l1++);
    for(l2=0;b[l2];l2++);
    for(i=0,k=0;i<=l1;i++)
	{
		if(a[i]==' ' || i==l1)
		{
		    if(l2==k)
		    {
		        m=1;
		        for(j=i-1,n=l2-1;n>=0;j--,n--)
		        if(a[j]!=b[n])
		            m=0;
		        if(m)
		        {
		            printf(" %s",c);
		            f=i;
		        }
		        else
		        {
		            for(j=f;j<i;j++)
    		        printf("%c",a[j]);
    		        f=j;
		        }
		        
		    }
		    else
		    {
		        for(j=f;j<i;j++)
		        printf("%c",a[j]);
		        f=j;
		    }
		    k=0;
		}
		else
		k++;
	}
    return 0;
}



