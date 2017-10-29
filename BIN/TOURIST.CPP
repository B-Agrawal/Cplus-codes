#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class tourist
{ int cno;
  char ctype;
  float pkm,d,amt;
  public:
   tourist()
   { cno=0000;
     ctype='A'; }
     void ctcharges();
     void reg_cab();
     void display();
     };
  void tourist::ctcharges()
  {if(ctype=='A')
    pkm=20.0;
    else if(ctype=='B')
	   pkm=18.0;
     else if(ctype=='C')
	   pkm=15.0;
   }
  void tourist::reg_cab()
  {   cout<<"\nenter cab no ";
      cin>>cno;
      cout<<"\nntr ct  type ";
      cin>>ctype;
      ctcharges();
      }
   void tourist::display()
   {cout<<"\nntr distance  :";
   cin>>d;
   cout<<"cabno  :  "<<cno;
   cout<<"\ncharges per km :"<<pkm;
   cout<<"\n distnce covered : "<<d;
   amt=d*pkm;
   cout<<"\n amt paid : "<<amt;
  }
  void main()
  {clrscr();
  tourist t;
  t.reg_cab();
  t.ctcharges();
  t.display();
  getch();
  }

