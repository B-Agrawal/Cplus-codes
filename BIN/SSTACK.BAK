#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
struct stack
{
 char n[20];
  stack *link;
}*top=NULL,*nptr=NULL;

void insert(stack *top)
{ stack *np=new stack;
  cout<<"\n enter the detail ";
     gets(np->n);
    if(top==NULL)
     { top=np;
     }
    else
      {top->link=np;
       top=np;
       }
  }
 void display(stack *np)
 { while(np)
  {cout<<'\n'<<np->n;
   np=np->link;
   }
  }

 void main()
 { clrscr();
 stack *nptr=new stack;
 char ch;
   cout<<"\n choic";
    cin>>ch;
   while(ch=='y'||ch=='Y')
    { cout<<"\n detail ";
     gets(nptr->n);
     cout<<"\n choice";
      cin>>ch;
      }
    nptr->link=NULL;
    if(top==NULL)
     { top=nptr;
     }
    else
    {top->link=nptr;
     top=nptr;
     }
   insert(top);
   cout<<"\n  content s of stack\n";

   display(top);
   getch();
   }


