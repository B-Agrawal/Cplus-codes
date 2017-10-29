#include<iostream.h>
#include<conio.h>

//int mat[][10],int a,int b

void ded(void);


void main()
{clrscr();
void values(void);
void desi(void);

ded();
values();
desi();
getch();
}


//*************************************************************************************
//           FUNC FOR STRUCTURE OF K MAP
//********************************************************************************************


void ded(void)
{ int i,a=5,b=5;
  clrscr();

 cout<<"\n\t\t\t\t K - MAP\n";

//******************** HORIZONTAL LINE


    for(i=0;i<50;i++)
     {  gotoxy(b,5);
      cout<<"-";
       gotoxy(b,8);
      cout<<"-";
       gotoxy(b,11);
      cout<<"-";
       gotoxy(b,14);
      cout<<"-";
       gotoxy(b,17);
      cout<<"-";
       gotoxy(b,20);
      cout<<"-";
      b++;
      }
//***************** VERTICAL LINES
  for(i=0;i<16;i++)
   { gotoxy(4,a);
      cout<<"|";
   gotoxy(14,a);
     cout<<"|";
     gotoxy(24,a);
      cout<<"|";
     gotoxy(34,a);
      cout<<"|";
      gotoxy(44,a);
      cout<<"|";

     gotoxy(54,a);
     cout<<"|";
     a++;
   }
  int c=10;
    gotoxy(8,c);
     cout<<"A'B'";
     c=c+3;
      gotoxy(8,c);
      cout<<"A'B";
       c=c+3;
       gotoxy(8,c);
      cout<<"AB";
       c=c+3;
       gotoxy(8,c);
      cout<<"AB'";
  int r=8;
  gotoxy(r,7);
   cout<<"ABCD";
   r=r+10;
  gotoxy(r,7);
  cout<<"C'D'";
  r=r+10;
   gotoxy(r,7);
   cout<<"C'D";
  r=r+10;   gotoxy(r,7);
    cout<<"CD";
   r=r+10; gotoxy(r,7);
   cout<<"CD'";


 }

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

 void values()
 { int a=20,b=10;
   gotoxy(a,b);
   cout<<"0";
   a+=10;
    gotoxy(a,b);
   cout<<"1";
   a+=10;
    gotoxy(a,b);
    cout<<'3';
     a+=10;
    gotoxy(a,b);
   cout<<"2";
   a=20; b+=3;
    gotoxy(a,b);
   cout<<"4";
    a+=10;
     gotoxy(a,b);
   cout<<"5";
    a+=10;
   gotoxy(a,b);
   cout<<"7";
   a+=10;
     gotoxy(a,b);
   cout<<"6";
   a=20;b+=3;
    gotoxy(a,b);
   cout<<"12";
    a+=10;
    gotoxy(a,b);
   cout<<"13";
   a+=10;
     gotoxy(a,b);
   cout<<"15";
   a+=10;
    gotoxy(a,b);
   cout<<"14";
    a=20; b+=3;
     gotoxy(a,b);
   cout<<"8";
   a+=10;
    gotoxy(a,b);
   cout<<"9";
    a+=10;
    gotoxy(a,b);
   cout<<"11";
    a+=10;
     gotoxy(a,b);
   cout<<"10";
   }

//********************************************************************************
  void desi()
{ int a=14,b=8,i,j;
  for( j=0;j<2;j++)
  { for(i=0;i<20;i++)
    { gotoxy(a,b);
      cout<<"@";a++;
      }b+=6;a=14;
   }
  for(j=0;j<2;j++)
  {
   for(i=8;i<15;i++)
   { gotoxy(a,i);
     cout<<"@";
     } a+=20;
   }
  }
