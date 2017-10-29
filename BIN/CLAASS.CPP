#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class abc
{int x,p,k,l;
char name[20];
 void cc()
 { x=p+k+l;name="niki miki";
 }
 public:
      void readdata();
      void display();

      };
 void abc::readdata()
 {cout<<"\nenter the value :  ";
 cin>>x>>p>>k>>l;
  cout<<"\n enter the name";
  gets(name);
  cc();
  }
 void abc::display()
 {cout<<"\n"<<name;
  cout<<"\n x = "<<x;
   }
  void main()
  {
  clrscr();
   abc w;
   w.readdata();
   w.display();
   getch();
   }