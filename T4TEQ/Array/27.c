#include <stdio.h>
int main()
{
int n[50],s,i,r,j,b[50];
scanf("%d",&s);
for(i=1;i<=s;b[i]=n[i],i++)
scanf("%d",&n[i]);
for(i=1;i<=s;i++)
{
	j=n[i];
    for(r=0;j;r=r*10+j%10,j/=10);
    n[i]=r;
}
for(i=1;i<=s;i++)
 {
    for(j=i+1;j<=s;j++)
    {
        if(n[i]>n[j]){
        	n[i]=n[i]+n[j]-(n[j]=n[i]);
        	b[i]=b[i]+b[j]-(b[j]=b[i]);
		}
        	
    }
}
for(i=1;i<=s;i++)
	printf("%d ",b[i]);
 
 return 0;
}

