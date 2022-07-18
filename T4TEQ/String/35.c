#include <stdio.h>
int
main ()
{
  int i,f=1,j;
  char a[100];
  scanf ("%[^\n]", a);
    for (i = 0; a[i]; i++)
    {
        
	    if(a[i]==',')
	    {
	        if(a[i+1]!=a[i-1])
	            {
	            f=0;
	            break;
	            }
	            
	    }
    }
    if(a[0]!=a[i-1])
    f=0;
	    printf("%d",f);
	            


  return 0;
}



