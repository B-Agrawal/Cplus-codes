#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void newch(char m[],int &loc)
{ char *p=m;

  for(;loc<strlen(m)-2;loc+=2,p++)
   {
     *(p+loc)=toupper(*(p+loc));
     }
     }
void main()
{
 clrscr();
 char x[]="Dynamic Act";
int loc=0;
 newch(x,loc);      int k=strlen(x);
     cout<<"\n"<< k<<endl ;
  cout<<x<<'#'<<loc;

char kl[]="asdfghjkl";
 int j=strlen(kl);cout<<"\n"<<j;
 getch();}
