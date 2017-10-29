#include<iostream.h>
#include<conio.h>
struct date
{ int dd,mm,yy:
}d;
void main()
{clrcsr();
 cout<<"\netr ";
 cin>>d.dd>>d.mm>>d.yy;
 if(d.dd==1||d.dd==21||d.dd==31)
  cout<<d.dd<<"st"<<".";
  else
     if(d.dd==2||d.dd==22)
       cout<<d.dd<<"nd"<<".";
	else
	 if(d.dd==3||d.dd==23)
	   cout<<d.dd<<"rd"<<".";
	    else
	      cout<<d.dd<<"th"<<".";
  switch(d.mm)
  { case 1:cout<<"jan"<<".";
      break;
    case 2:cout<<"feb"<<".";
     break;
     case 3:cout<<"marsh"<<".";
     break;
    }

