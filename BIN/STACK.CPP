#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
 char name[20];
 int rno;
  node *link;
  }*np=NULL,*top=NULL;

void display(node *np)
{  while(np)
  {
    cout<<np->name;
    cout<<endl<<np->rno<<endl;
    np=np->link;
    }
 }
void main()
{
  clrscr(); char ch;
  cout<<"\n enter choice";
   cin>>ch;
  while(ch=='y'||ch=='Y')
   {  np=new node;
       cout<<"\n enter name";
       gets(np->name);
	cin>>np->rno;
       np->link=NULL;
       if(top==NULL)
	{ top=np;
	}
       else
	 { np->link=top;
	   top=np;
	   }
	cout<<"\n ch->";
	cin>>ch;
      }
    display(top);
   getch();
   }




