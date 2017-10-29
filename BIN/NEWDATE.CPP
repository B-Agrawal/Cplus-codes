#include<iostream.h>
#include<conio.h>
static int  dm[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int dd,mm,yy;
unsigned short dc;
int isleap(int y)
{return ((y%4==0&&y%100!=0)||y%400==0);}

class date
{public:
 // int d,m,y;
  void olddate(int d,int m,int y);
   void nextdate();
   void newdate(int y);
   };
void date::olddate(int d,int m,int y)
{
  m<1?m=1:0;
  m>12?m=12:0;
  d<1?d=1:0;
  d>dm[m]?d=dm[m]:0;
  if(isleap(y))
     dm[m]=29;
   else dm[m]=28;
dd=d;mm=m;yy=y;
}

void date::nextdate()
{	dd++; dc++;
      while(dd>dm[mm])
	  {dd-=dm[mm];
	    mm+=1;
	    if(mm>12)
		{  mm=1;yy+=1;
		   if(isleap(yy))
		    {dm[mm]=29;}
		    else {dm[mm]=28;}
		 }
	    }
 }
void date::newdate(int n)
{for(int i=0;i<n;i++)
 nextdate();
}

void main()
{clrscr();
date d1; int xx,zz,yyyy,no;
cout<<"\nenter old date (dd/mm/yyyy) " ;
cin>>xx>>zz>>yyyy;
cout<<"\n enter no days to increased and give new:";
cin>>no;
d1.olddate(xx,zz,yyyy);
dc=0;
d1.newdate(no);

cout<<"\n\nNEW DATE \n";
cout<<dd<<'/'<<mm<<'/'<<yy;
getch();
}