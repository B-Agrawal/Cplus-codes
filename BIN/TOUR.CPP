#include<iostream.h>
#include<conio.h>
class tour
{char tc[40];
int nof,nok,km;
float f,tf;
public:
tour()
{strcpy(tc,"null");
 nof=0;nok=0;km=0;tf=0;
 }
 void assign();
 void entertout();
 void showtour();
 };
void tour::assign()
{ if(km>=1000)
   f=500;
   else if(km>=500&&<1000)
     f=300;
     else if(km<500)
       f=200;
  }
 void tour::entertour()
 {
 cout<<"\nenter  tour code ";
 cin>>tc;
 cout<<"\nenter no. of adults & childrn & dist : ";
 cin>>nof>>nok>>km;
  }
 void tour::showtour()
 {int t1,t2;
 cout<<"\n"<<tc<<"\nadults\t"<<nof<<"\n"<<"\nchildren\t"<<nok;
 cout<<"\ndist:"<<km<<"km";
 t1=nof*f;
 t2=(nok*f)*0.5;
 tf=t1+t2;
 cout<<"\ntotal fare\t"<<tf;
 cout<<"\n HAVE A HAPPY JOURNEY ";
 }
 void main()
 {clrscr();
 tour t;
 t.entertour();
 t.assign();
 t.showtour();
 getch();
 }


