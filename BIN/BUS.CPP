#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class bus
{ int bno;
char btype;
char name[20],from[20],to[20];
float d,fr;
public:
bus()
{btype='o';
 fr=500.0;
 }
void calcfare();
void allocate();
void show();
};
void bus::calcfare()
{ if(btype=='o'||btype=='O')
fr=15*d;
   if(btype=='e'||btype=='E')
   fr= 20*d;
    else if(btype=='l'||btype=='L')
    fr=24*d;
    else fr=50*d;

   }
void bus::allocate()
{ cout<<"\n ntr bus no\t";
   cin>>bno;
  cout<<"\n ntr name : type : from : to \t";
   gets(name);
   cin>>btype;
   gets(from);
   gets(to);
   cout<<"\n netr  distance(km) : \t";
   cin>>d;
   calcfare();
   }
 void bus::show()
 {cout<<"bno"<<bno<<'\n';
 cout<<"btype : "<<btype<<'\n'<<name<<'\n'<<"from  :"<<
      from<<'\n'<<"to : "<<to<<'\n'<<d<<"(km)"<<'\n'<<fr<<"rupees"<<'\n';
      }
  void main()
  {clrscr();
   bus b;
   b.allocate();
   b.show();
   getch();
   }

