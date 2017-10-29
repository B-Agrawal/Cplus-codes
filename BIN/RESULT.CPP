#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class report
{
int rlln;
char name[20];
float m1,m2,m3,m4,m5;
float per;
char g;
public:
 void read();
 void show();
 void calcgrade();
 void calcper();
 };
 void report::calcgrade()
 {         if(per<50)
		g='F';
	   else if(per<60)  g='D';
	   else if(per<75)  g='C';
	   else if(per<90)  g='B';
	   else if(per<100) g='A';
	   else if(per==100) g='+';
    }
  void report::read()
  { cout<<"\nenter rool no";
  cin>>rlln;
   cout<<"\n name :  ";
   gets(name);
   cout<<"\n netr marks (m1:m2:m3:m4:m5)";
   cin>>m1>>m2>>m3>>m4>>m5;
   calcper();
   calcgrade();
   }
   void report::calcper()
   { per=(m1+m2+m3+m4+m5)/5;
   }
   void report::show()
   {cout<<"\n your report : \n";
     cout<<rlln<<'\n'<<name<<'\n'<<per<<"%"<<'\n'<<g;
     }
    void main()
    {
    clrscr();
    report r;
    r.read();
    r.calcper();
    r.calcgrade();
    r.show();
    getch();
    }
