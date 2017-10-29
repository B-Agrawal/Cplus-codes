#include<iostream.h>
#include<conio.h>
#include<process.h>
struct qq
{
 int m;
 qq *link;
 }*ft=NULL,*rr=NULL,*np=NULL;
 void push()
 { qq *np=new qq;
   cout<<"\n renter no to be insert\n";
    cin>>np->m;
    np->link=NULL;
   if(ft==NULL)
   {
     ft=np;
     rr=np;
     cout<<ft->m<<'\t'<<rr->m;
    }
  else
    { rr->link=np;
      rr=np;
      cout<<"\nfornt\t"<<ft->m<<'\t'<<rr->m<<'\n';
      }
  }
 void delqq()
 {
   qq *tmp=NULL;
    tmp=ft;
   if(ft==NULL)
    { cout<<"\n Underflow";
      }
    else
     { ft=ft->link;
       cout<<"\n deleting";
	cout<<"\n "<<tmp->m;
	delete tmp;
	}
    }
  void display(qq *ft)
  { qq *np=new qq;
    np=ft;
    if(ft==NULL)
     { cout<<"\n q is empty";
       }
     else
      {  while(np)
       { cout<<np->m<<endl;
	 np=np->link;
	 }
       }
   }
   void main()
  { clrscr();

    int ch;
    cout<<"\n enter choice 1.push\t2.pop\t3.display\t4.exit\n";
     cin>>ch;
   do{
      switch(ch)
     {  case 1:cout<<endl;push();
		break;
       case 2 : cout<<endl;
		delqq();
	break;
	case 3: cout<<endl;
		display(ft);
		 break;
	 case 4:exit(0);
	  default :cout<<"\n wrong choic";
	  }
	 cout<<"\n enter ch";
	 cin>>ch;
	 }
	while(ch!=4);
      getch();
}

