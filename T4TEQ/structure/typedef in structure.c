//typedef in structure
/*typedef --> We can give short or new names of a structure data type*/
#include<stdio.h>
int main()
{
	typedef struct complex c;
	typedef struct complex{
		int r;
		int i;
	}complex;
	
	struct complex c1;
	complex c2;
	c c3;
	
	c1.r=1;
	c1.i=2;
	
	c2.r=2;
	c2.i=2;
	
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	
	printf("%d %d",c3.r,c3.i);
}