#include<iostream.h>
#include<conio.h>
static int  dm[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
struct newdate
{
int dd,mm,yy;
}ss;
//unsigned short dc;
int isleap(int y)
{return ((y%4==0&&y%100!=0)||y%400==0);}

class date
{public:
   void nextdate(int);
   void newdate(int y);
   };

void date::nextdate(int n)
{      ss.dd+=n;
	while(ss.dd>dm[ss.mm])
	  { ss.dd-=dm[ss.mm];
	   ss.mm++;
	    if(ss.mm>12)
		{  ss.mm-=12;ss.yy+=1;
		   if(isleap(ss.yy))
		    {dm[2]=29;}
		    else {dm[2]=28;}
		 }
	    }
 }
void date::newdate(int n)
{

 nextdate(n);
}
void main()
{clrscr();
date d1; int xx,zz,yyyy,no;
cout<<"\nenter old date (dd/mm/yyyy) " ;
cin>>xx>>zz>>yyyy;
cout<<"\n enter no days to increased and give new:";
cin>>no;
ss.dd=xx;ss.mm=zz;ss.yy=yyyy;
//(xx,zz,yyyy);
d1.newdate(no);
//dc=0;
cout<<"\n\nNEW DATE \n";
cout<<ss.dd<<'/'<<ss.mm<<'/'<<ss.yy;
getch();
}