#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

struct  student
{
char name[30];
int rno;
float per;
}ss[5];

void main()
{
 clrscr();  int i;
 for(i=0;i<2;i++)
{
 cout<<"\nentr name";
 gets(ss[i].name);
 cout<<"\n entr roll no";
 cin>>ss[i].rno;
 cout<<"\nentr percentage";
 cin>>ss[i].per;
}

clrscr();

 for(i=0;i<60;i++)
    cout<<'-';

 gotoxy(30,2);
 cout<<"Result";
 cout<<endl;

 for(i=0;i<60;i++)
 cout<<'-';

 cout<<"\n NAME       ROLL NO         PER%\n";

for(i=0;i<60;i++)
 cout<<'-';
 cout<<endl;

for(i=0;i<2;i++)
 {cout<<ss[i].name<<"       "<<ss[i].rno<<"      "<<ss[i].per<<endl;  }

 for(i=0;i<60;i++)
 cout<<'-';

 getch();
 }
