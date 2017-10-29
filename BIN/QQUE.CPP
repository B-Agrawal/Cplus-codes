#include<iostream.h>
#include<conio.h>
#include<process.h>
class queue
{ int m;
 queue *link;
 public:
  void push();
  void pop();
  void display(queue *np);
  }*front=NULL,*rear=NULL;

 void queue::push()
 { queue *np=new queue;
   cout<<"\n enter no to insert \n";
   cin>>np->m;
   np->link=NULL;
   if(front==NULL)
    {front=rear=np;}
    else
    { rear->link=np;
      rear=np;
      }
  }
 void queue::pop()
 { if(front==NULL)
 { cout<<"\n underflow";
   }
   else
    { queue *np=new queue;
      np=front;
      front=front->link;
      cout<<"\n deletiing";
       cout<<"\n"<<np->m;
       delete np;
       }
    }
  void queue::display(queue *front)
  { queue *np=new queue;
    np=front;
    if(front==NULL)
     { cout<<"\nunderflow\n" ;
     }
    else
    { while(np)
      { cout<<np->m;cout<<endl;
	np=np->link;
       }
      }
   }
 void main()
 {clrscr();
 queue *q;
 int n;
  cout<<"\nchoice\n1.\tpush\t2.pop\t3.display\t4.exit\n";
  cin>>n;
  do
  {
   switch(n)
    {
	case 1:q->push();
	    break;
	 case 2:q->pop();
		break;
	 case 3: q->display(front);
	     break;
	  case 4: exit(0);
	  default :cout<<"\n wrongchoice";
	  }
      cout<<"\n enter choice";
	  cin>>n;
      }while(n!=4);
   getch();
  }