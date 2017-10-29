#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{ char name[20];
 int age;
 node *link;
}*nptr=NULL,*start=NULL,*end=NULL,*np=NULL;
void display(node *np)
{ while(np)
 { cout<<'\n'<<np->name;
 cout<<'\n'<<np->age;
  np=np->link;
  }
 }
void main()
{ clrscr();
  char ch;
  cout<<"\n ntr choice";
   cin>>ch;
   while(ch=='y'||ch=='Y')
   {
     nptr=new node;
      cout<<"\n ntr name";
       gets(nptr->name);
	cout<<"\n ntr age";
	cin>>nptr->age;
	nptr->link=NULL;
	if(start==NULL)
	 {
	   start=nptr;
	   }
	  else
	    {nptr->link=start;
	     start=nptr;
	     }
	cout<<"\n ntr choice";
	 cin>>ch;
	 }
	display(start);
      getch();
      }
