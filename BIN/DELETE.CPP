#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
void main()
{ clrscr();
 char ch[25];
  int c=0,i=0;
ofstream o1("notes.txt",ios::out);
if(!o1)
{ cout<<"\n flile does not exist";
 exit(0);
 }
 else

    {  gets(ch);
	o1<<ch;
	}

    o1.close();
  ifstream i1("notes.txt",ios::in);
  if(!i1)
  { cout<<" !!!!!!!!!!!!";
   exit(0);
   }
  else
   {

   while(i<strlen(ch))
    {  i1.getline(ch,25,'.');
      if(ch[i]==' ')
	c++; i++;
	}
	}
      i1.close();
     cout<<"\n no of spaces"<<c;

      getch();
      }