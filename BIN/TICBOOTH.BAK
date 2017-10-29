#include<iostream.h>
#include<conio.h>
class ticbooth
{int np1;
float rup,tamt;
 public:
   ticbooth()
   {rup=2.50;
   np1=0;
   tamt=0;
   }
 void pplno();
 void ppltic();
 void total();
 void dis_tic_sold();
 };
 void ticbooth::pplno()
 { np1++;}
 void ticbooth::ppltic()
 {np1++;
  tamt++;
  }
 void ticbooth::total()
 {cout<<"\n total ppl arrived :\t"<<np1;
  cout<<"\n total amt         :\t"<<tamt*rup;
  }
 void ticbooth::dis_tic_sold()
 {cout<<"\n ticket sold out   :\t"<<tamt;
 }
 void main()
 {
 clrscr();
 ticbooth t;char ch;
 do{
 cout<<"\n do u want to buy ticket (y/n) \n{press 'o' to terminate}\t:";
 cin>>ch;
  if(ch=='y')
  t.ppltic();
  else
  t.pplno();
  }while(ch!='o');
  t.dis_tic_sold();
  t.total();
  getch();
  }