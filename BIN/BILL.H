#include<iostream.h>
#include<conio.h>
void gotoxy(int a,int b);
void billing()
{ clrscr();
 int i;
//*****************UPPR LINE*******************************

for( i=0;i<=60;i++)
   cout<<'-';
//******************** LEFT RIGHT LINE**********************
 int k=0;
 gotoxy(1,2);
  do{
    cout<<'|';
    for( i=0;i<59;i++)
    {cout<<' ';    }
    cout<<'|'; cout<<'\n'; k++;
      }while(k<=20);

//************** LAST LINE *********************************

   for( i=0;i<=60;i++)
   cout<<'-';
//**************(***MID LINE*********************************
    gotoxy(2,8);
    for(i=0;i<59;i++)
     cout<<"-";
//************* SHOP NAME LINE & OTHER DETAILS *****************************
    gotoxy(20,2);
    cout<<"HINDUSTAAN BOOK DEPOT";
    gotoxy(44,4);
    cout<<"DATE :";
    gotoxy(3,5);
    cout<<"NAME : ";
    gotoxy(3,7);
    cout<<"PH.NO: ";
    gotoxy(3,9);
    cout<<"ITEM NAME\t\t n.of.item\tCOST\t   TOTALRATE";
//***************MID LINE**************************************
    gotoxy(2,10);
    for(i=0;i<59;i++)
       cout<<"-";
 //****************LAST LINE**************************************
    gotoxy(2,21);
  for(i=0;i<59;i++)
     cout<<"-";

//***************** MID VRTICALS LINES*************************
     int a=9;
    for(i=0;i<14;i++)
    { gotoxy(25,a);
     cout<<'|'<<'\n';
       gotoxy(35,a);
	  cout<<'|'<<'\n';
	gotoxy(48,a);
	     cout<<'|'<<'\n';
	 a++;
     }

   gotoxy(7,22);
   cout<<"TOTAL";  gotoxy(50,22);cout<<"=";
getch();
}