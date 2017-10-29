#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
 char ch[25];
void count()
{

 ofstream o1("story.txt",ios::out);
  if(!o1)
  { cout<<" !!!!!!!!!!!";
   exit(0);
   }
  else
   { cout<<"enter the line ";
      gets(ch);
    o1<<ch;

    }
  o1.close(); }
  void read()
  {  int cnt=0;
 ifstream i1("story.txt",ios::in);
     while(!i1.eof())
	{
	i1>>ch; cout<<ch;
       if((strcmpi(ch,"she")==0)||(strcmpi(ch,"he")==0))
	cnt++;
	}

      cout<<"\n  no of he/she in the line    "<<cnt;
       i1.close(); }


 void main()
 {
clrscr();
   count();
    read();
  getch();
  }

