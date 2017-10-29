#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
void main()
{ clrscr();
ifstream i1("story.txt",ios::in|ios::ate);
  if(!i1)
  {cout<<"\n file not o[pen";}
  else{ long pos=i1.tellg();
   cout<<"\n size of file is "<<pos<<"bytes\n";
   }
 i1.close();
 getch();
 }