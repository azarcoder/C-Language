#include<stdio.h>
int npal(int);
int nprime(int);
int main()
{
    int n,l,h;
    scanf("%d",&n);
    l=h=n;
    while(1)
    {
        if(npal(h) && nprime(h)){
            printf("%d",h);
            break;
        }
        if(npal(l) && nprime(l)){
            printf("%d",l);
            break;
        }
        h++;
        l--;
    }
    return 0;
}
int npal(int n)
{
    int f=1,t=n,s=0;
    while(n)
    {
        s=s*10+n%10;
        n/=10;
    }
    if(t!=s)
        f=0;
    return f;
}
int nprime(int n)
{
    int f=1,i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}

