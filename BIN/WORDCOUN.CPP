#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
void main()
{ clrscr();
 ifstream  i1("part.txt",ios::in);
 char ch[20];
// int c=0;
 if(!i1)
  {cout<<"\n file not poen";
   exit(0);
   }
  else
   {  int x;
    while(!i1.eof())
    { i1>>ch;
     x=strlen(ch);
     for(int i=x-1;i>=0;i--)
     { cout<<ch[i];}
     //cout<<' ';
    // c++;
    }
   // cout<<"\n the no of space"<<c;

  }
  i1.close();
  getch();

  }