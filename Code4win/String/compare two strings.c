//compare two strings
#include<stdio.h>
int cmp(char* a,char* b);
int main()
{
	char a[100],b[100];
	int result;
	printf("Enter text 1:");
	scanf("%s",a); 
	printf("Enter text 2:");
	scanf("%s",b);
	result = cmp(a,b);	
	if(result == 0)
		printf("Both string are equal");
	else if(result<0)
		printf("First string is lexicographically smaller than second.");
	else
		printf("First string is lexicographically grater than second.");
	return 0;
}
int cmp(char* a,char* b)
{
	int i=0;
	while((a[i] && b[i]) && (a[i] == b[i])) i++;
	return a[i]-b[i];
}