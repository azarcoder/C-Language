//array same or not
#include<stdio.h>
int main()
{
    int d[50],s,i,n,f=1;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
      scanf("%d",&d[i]);
      s=(d[2]>d[1])?d[2]-d[1]:d[1]-d[2];
       for(i=2;i<n;i++)
       {
           if((d[i+1]>d[i]?d[i+1]-d[i]:d[i]-d[i+1])!=s)
           {
               f=0;
               break;
           }
       }
         if(f)
           printf("SAME");
         else
           printf("NOT SAME");
    return 0;
}



