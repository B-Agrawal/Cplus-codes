#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int dd,d2,mm,m2,yy,y2;
  cout<<"\nenter date 1(dd-mm-yy)\t";
cin>>dd>>mm>>yy;
 cout<<"\n enter date 2\t(dd-mm-yy) ";
  cin>>d2>>m2>>y2;
  cout<<"\n later date is:\t";

     if(yy>y2)
       {   if(mm>m2)
		{
		  if(dd>d2)
		    cout<<dd<<'-'<<mm<<'-'<<yy<<'\n';
		  else
		    cout<<d2<<'-'<<m2<<'-'<<y2<<'\n';
		    }
	     else  cout<<d2<<'-'<<m2<<'-'<<y2<<'\n';
	}
      else
	cout<<d2<<'-'<<m2<<'-'<<y2<<'\n';
    getch();
    }