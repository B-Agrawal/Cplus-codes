#include<fstream.h>
#include<conio.h>
#include<process.h>
void main()
{clrscr();
 char ch;
 ifstream i1("story.txt",ios::in);
 if(!i1){cout<<"nottttt!";exit(0);}
 else
 {while(!i1.eof())
 {  ch=(char)i1.get();
   cout<<ch;
   }
   }
 i1.close();
 getch();
 }