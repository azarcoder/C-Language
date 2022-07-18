#include <stdio.h>
int main()
{
   int n,i,j,a=1;
   scanf("%d",&n);//4
   for(i=1;i<=n;printf("\n"),i++)
   {
       for(j=i;j++<n;printf(" "));//space
       
       for(j=1;j++<=i;printf("%2d ",i%2?a++:a--));
	   a+=i%2?i:i+1; 
   }
    return 0;
}
