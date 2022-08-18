#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//----------------------------
int admin();
int student();
int add();
int issue();
int save();
int view();
int search();
int lend();
int login();
int signup();
//-----------------------------
struct book
{
	int bookid;
	char bookname[30];
	char author[30];
	int bookcount[100];
	int f,cs,cs2;
}book[100];

struct student
{
	int id,f,psw;
}s[100];
//------------------------------
//Global variables
int ADD;
int INR=0;
int g=1,id=1001,g1=1,ab=0,abid=1000001;
//-------------------------------
int main()
{
	int n;
	printf("1.Admin\n2.Student\n3.Exit()\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	if(n==1)
		admin();
	if(n==2)
		student();
	if(n==3)
		exit(0);
    return 0;
}
int admin()
{
	char id[10],psw[20];
	printf("Enter admin id:");
	scanf("%s",id);
	printf("Enter password:");
	scanf("%s",psw);
	if((strcmp(id,"azar")==0) && (strcmp(psw,"1234")==0))
	{
		printf("Login successful!\n\n");
		int n;
		while(1)
		{
			printf("1.Add Book\n2.Issue Book\n3.Save Report\n4.Exit\n");
			printf("Enter your choice:");
			scanf("%d",&n);
			if(n==1)
				add();
			if(n==2)
				issue();
			if(n==3)
				save();
			if(n==4)
				return main();
		}
			
	}
	else
	{
		printf("Incorrect Id/password!\n");
		return admin();
	}
}
int student()
{
	char id[10],psw[20];
	int n;
	while(1)
	{
		printf("\n1.Signup\n2.Login\n3.Exit\n"); 
		printf("Enter your choice:");
		scanf("%d",&n);
		if(n==1)
			signup();
		if(n==2)
			login();
		if(n==3)
			return main();
	}	
}
//signup() login()
int signup()
{
	char n[30];
	int p;
	printf("enter your name:"); 
    scanf("%s",n);
    printf("enter your password:"); 
    scanf("%d",&p);  
    printf("account cearted succesfully\n"); 
	s[g].id=id;
    printf("your used id:%d",id++); 
    s[g].psw=p; 
    g++; 	
}
int login()
{
	int uid,p,i,f,n;
	printf("Enter user id:"); 
    scanf("%d",&uid); 
    printf("Enter your password:"); 
    scanf("%d",&p); 
    for(i=1;i<=g;i++) 
    { 
        if(s[i].id==uid&&s[i].psw==p)
            {
                f=1; 
                break; 
			} 
    } 
    if(f==1) 
    {
    	while(1)
		{
			printf("1.View Books\n2.Search Book\n3.Lend & Return Book\n4.Exit\n");
			printf("Enter your choice:");
			scanf("%d",&n);
			if(n==1)
				view();
			if(n==2)
				search();
			if(n==3)
				lend();
			if(n==4)
				return main();
		}
	}
}


//add() issue() save()
int add()
{
	int i,j,c;
	printf("Enter how many books do you want to add?");	
	scanf("%d",&ADD);
	for(i=1;i<=ADD;i++,INR++)
	{
		//printf("Enter Book ID:");
		//scanf("%d",&book[ab].bookid);
		book[ab].bookid=abid;
		printf("Enter Book Name:");
		scanf("%s",book[ab].bookname);
		printf("Enter Book Author name:");
		scanf("%s",book[ab].author);
		printf("Enter how many count do you want?");
		scanf("%d",&book[ab].cs);
		book[ab].cs2=book[ab].cs;
		c=book[ab].bookid;
		for(j=0;j<book[ab].cs;j++)
		{
			book[ab].bookcount[j]=c;
			c++;
		}
		book[ab].f=1;
		abid++;
		ab++;
	}
	
}
int issue()
{
	int i;
	printf("No of book issued:\n");
	for(i=0;i<ab;i++)
	{
		if(book[i].f==0)
		{
			printf("Book ID:%d\tBook name:%s\n",book[i].bookid,book[i].bookname);
		}
	}
}

int save()
{
	int i;
	FILE *fp;
	fp=fopen("books.txt","w");
	if(fp==NULL)
	{
		printf("Can't open the file!");
		exit(1);
	}
	fprintf(fp,"BOOK ID\tBOOK NAME\tAUTHOR NAME\tCOUNT\n");
	fprintf(fp,"---------------------------------------\n");
	for(i=0;i<ab;i++)
	{
		fprintf(fp,"%d\t%s\t%s\t%d\n",book[i].bookid,book[i].bookname,book[i].author,book[i].cs);
	}
	//-------------ISSUED BOOKS-------------------------
	fprintf(fp,"\n\n");
	fprintf(fp,"ISSUED BOOKS:\n\n");
	fprintf(fp,"BOOK ID\tBOOK NAME\tAUTHOR NAME\n");
	fprintf(fp,"-----------------------------------------\n");
	for(i=0;i<ab;i++)
	{
		if(book[i].f==0)
			fprintf(fp,"%d\t%s\t%s\n",book[i].bookid,book[i].bookname,book[i].author);
	}
	printf("Details saved successfully!\n");
	fclose(fp);
}
//view() search() lend()
int view()
{
	int i,j;
	if(INR==0)
	{
		printf("Empty!\n");
	}
	else
	{
		for(i=0;i<ab;i++)
		{
			if(book[i].f==1)
			{
				printf("Book ID:%d\tBook Name:%s\tAuthor name:%s",book[i].bookid,book[i].bookname,book[i].author);
				printf("\tcount:%d",book[i].cs);
				printf("\n\n");
			}
		}
	}
}
int search()
{
	int id;
	int i;
	printf("Please enter your book id:");
	scanf("%d",&id);
	for(i=0;i<ab;i++)
	{
		if(id==book[i].bookid && book[i].f==1)
		{
			printf("\nBook currently Available!\n");
			
		}
}
}
int lend()
{
	int n;
	while(1)
	{
		printf("1.Lend Book\n2.Return Book\n3.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&n);
		if(n==1)
		{
			int n,i;
			printf("Enter book number to lend:");
			scanf("%d",&n);
			for(i=0;i<ab;i++)
			{
				if(n==book[i].bookid && book[i].f==1)
				{
					book[i].cs--;
					if(book[i].cs==0)
						book[i].f=0;
					printf("Book lended successfully!\n");
				}				
			}
		}
		if(n==2)
		{
			int n,i;
			printf("Enter book number to return:");
			scanf("%d",&n);
			for(i=0;i<ab;i++)
			{
				if(n==book[i].bookid &&book[i].cs<book[i].cs2)
				{
					//if(book[i].cs==0)
				//	{
						book[i].f=1;
						book[i].cs++;
						printf("Book Returned successfully!\n");
				//	}
				}			
			}
			
		}
		if(n==3)
			return main();
}
}
