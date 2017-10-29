#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int i,j=1;
gotoxy(1,2);
 for(i=0;i<75;i++)
       cout<<"~";

 for(i=0;i<23;i++)
   { gotoxy(1,j);
     cout<<"."<<'\n';
     gotoxy(15,j);
      cout<<"."<<'\n';
      gotoxy(30,j);
       cout<<"."<<"\n";
       gotoxy(45,j);
       cout<<"."<<'\n';
       gotoxy(60,j);
       cout<<"."<<'\n';
       gotoxy(75,j);
       cout<<"."<<'\n';
       j++;
      }
     for(i=0;i<75;i++)
       cout<<"~";
    getch();
       }
