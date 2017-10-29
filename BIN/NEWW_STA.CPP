#include<iostream.h>
#include<conio.h>
#include<process.h>
class mynode
{
 int n;
 mynode *link;
 public:
  void push();
  void pop();
  void display(mynode *ttop);
}*top=NULL;
void mynode::push()
{ mynode *tmp=new mynode;
  cout<<"\n enter the no: ";
  cin>>tmp->n;
  if(top==NULL)
  { top=tmp;
  }
  else
  {
   tmp->link=top;
   top=tmp;
  }
  }
 void mynode::pop()
 {
  mynode *temp=new mynode;
  temp=top;
  if(top==NULL)
   { cout<<"\n underflow";}
   else
   {
  top=top->link;
  cout<<"\n deleting\n";
  cout<<temp->n;
  delete temp;
  }
 }
  void mynode::display(mynode *ttop)
  { if(ttop==NULL)
     cout<<"\n stack is empty\n";
    else
     { while(ttop)
	{cout<<ttop->n<<'\n';
	ttop=ttop->link;
	}
      }
   }
  void main()
  { clrscr();
   mynode *np;
    int ch;
    cout<<"\n enter choice 1.push\t2.pop\t3.display\t4.exit\n";
     cin>>ch;
   do{
      switch(ch)
     {  case 1:cout<<endl;np->push();
      break;
       case 2 : cout<<endl;
		np->pop();
	break;
	case 3: cout<<endl;np->display(top);
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