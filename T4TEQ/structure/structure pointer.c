//structure pointer
#include<stdio.h>
int main()
{
	struct complex{
		int r;
		int i;
	}c;
	struct complex *s=&c;
	s-> r=6;
	s-> i=8;
	
	printf("R value:%d\nI value:%d",s->r,s->i);
}
