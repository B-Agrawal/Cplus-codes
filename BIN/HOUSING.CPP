#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
randomise();
class housing
{int rno;
char sname[25];
char type[25];
float co;
 public:
 int n,m;
 int returnrno();
 void readdata();
 void display();
 void drawno();
 };
 void housing::drawno()
 {randomize();
   m=random(21)+10;
   n=random(2)+10;}

/* { int n1,n2,i;
  randomize();
  n1=random(6)+10;
  n2=random(6)+10;
  for(i=0;i<10;i++)
    if(rno==n1||rno==n2)
     display();
     else cout<<"sorry !!!!!!!!!!! @";
     }   */



 int housing::returnrno()
 { rno=random(2)+10;
 return rno;
 }

 void housing::readdata()
 {
 cout<<"\nenter name and type\t";
   gets(sname);         cout<<"\n\t";
   gets(type);
   cout<<"\nnter cost \t ";
   cin>>co;
   }
 void housing::display()
 {cout<<"\n house name  : "<<sname;
  cout<<"\n reg no  : "<<rno;
  cout<<"\ntype  :  "<<type;
  cout<<"|n cost :  "<<co;
  }


 void main()
  {
  clrscr();
  housing h[10];  int i;
  for( i=0;i<2;i++)
	{
	h[i].readdata();
	     }

  for( i=0;i<10;i++)
  {
	  h[i].drawno();
      if((h[i].returnrno()==h[i].m)||(h[i].returnrno()==h[i].n))
      h[i].display();
      else
       cout<<"\n sorry!!!!!!!   no match  ";
  }
   getch();
   }


/*void main()
{clrscr();
housing h,*a;
h.readdata();
h.drawno();

getch();
}
  */

