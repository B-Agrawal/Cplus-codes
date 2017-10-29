#include<iostream.h>
#include<conio.h>
void call()
{int static a=0;
 int v=0;
 cout<<"a:"<<a;
 cout<<"v:"<<v<<endl;
 }
void main()
{clrscr();
for(int i=0;i<4;i++)
{ call();
}
getch();
}