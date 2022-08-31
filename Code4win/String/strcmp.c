//strcmp
#include<stdio.h>
int main()
{
	char a[100]={"T4TEQ"},b[100]={"T4TEq"};
	int i=0,s;
	while(a[i]==b[i])
	{
		if(a[i]=='\0' && b[i]=='\0')
			break;
		i++;
	}
	s=a[i]-b[i];
	//printf("%d\n",s); -32
	if(s==0)
		printf("same");
	else
		printf("Not same");
    return 0;
}
