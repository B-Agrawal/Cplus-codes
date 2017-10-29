#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int z=1;
 for(int i=0;i<5;i++)
  {  for(int j=4;j>i;j--)
    { cout<<" ";
    }
   for(int k=1;k<=z;k++)
   { cout<<k;
    }
    z+=2;
    cout<<endl;
    }
   getch();
   }