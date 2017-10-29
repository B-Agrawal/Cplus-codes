#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class emp
{ int eid;
 char ename[20];
 float bsal,da,hr,pa,net;
  void calc()
  {da=bsal*0.56; hr=0.20*bsal;  pa=0.12*bsal;
    net=(bsal+da+hr)-pa;}
   public:
    void readdata();
    int returnid();
    void display();
    };
  int  emp::returnid()
  { return eid;  }
  void emp::readdata()
  {cout<<"\nntr eid  :  ";
  cin>>eid;
  cout<<"\n nrt name  :  ";
  gets(ename);
  cout<<"\nntr bsal  :  ";
  cin>>bsal;
  calc();
  }
  void emp::display()
  {cout<<"\n"<<eid<<"\n"<<ename<<"\nbsal"<<bsal;
  cout<<"\nda="<<da<<"\nhr= "<<hr<<"\npa= "<<pa<<"\nnet_sal"<<net;
  }
  void main()
  {clrscr();
   emp e[10];
    int i,eno;
    for(i=0;i<3;i++)
    { e[i].readdata();
    }
    cout<<"\nenter emp no  :   ";
    cin>>eno;
    for(i=0;i<3;i++)
    { if(e[i].returnid()==eno)
	e[i].display();
	}
     getch();
     }
