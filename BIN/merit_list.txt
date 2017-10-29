/*Write a program to accept roll numbers and percentage of 10 students
using structure  and print the merit list in a suitable format*/

struct std
 {int roll;
 float perc;
 };

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{clrscr();
 std rcd[10],t;
 int i,k,l;

 //accept details
 cout<<"Enter Details of 10 students - ";
 for(i=0;i<10;i++)
   {cout<<"\nStudent-"<<i+1;
   cout<<"\nRoll No -";
   cin>>rcd[i].roll;
   cout<<"Percentage-"  ;
   cin>>rcd[i].perc;

   }

 //bubble sort
 clrscr();
 for(k=0;k<10;k++)
   {for(l=0;l<(10-k);l++)
     {if (rcd[l].perc<rcd[l+1].perc)
       {t.roll=rcd[l].roll;
       t.perc=rcd[l].perc;
       rcd[l].roll=rcd[l+1].roll ;
       rcd[l].perc=rcd[l+1].perc;
       rcd[l+1].roll=t.roll;
       rcd[l+1].perc=t.perc;

       }
     }
   }


 //Merit List

 cout<<"\n\t\t\t\t Merit list\n";
 for (int j=0;j<80;j++)
 cout<<'-';
 cout<<"\nRoll No.     Percentage" ;

 for(i=0;i<10;i++)
   {
      cout<<'\n'<<rcd[i].roll<<"\t\t"<<rcd[i].perc;
   }

getch();
}









