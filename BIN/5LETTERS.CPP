#include<fstream.h>
#include<string.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
void main()
{ clrscr();
char str[50];  int c=0,x;
ifstream o1("vowel.txt",ios::in);
if(!o1)
{ cout<<"\n!!oops";
 exit(0);
 }
else
 {
   o1.seekg(0,ios::beg);
 while(!o1.eof())
     {
       o1>>str;
	 x=strlen(str);
	if(x==3);
	  { c++;}
       }
     }
    cout<<"\n no 3 letteed wrd"<<'\t'<<c;
  o1.close();

getch();
}
