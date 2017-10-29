#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class queue
{ char name[20];
  int rno;
  queue *link;
  Public:
   void insert(

  };
void string::enter()
{
 cout<<"\n enter string";
  gets(str);
  cout<<"\n enter ch";
   cin>>ch;
   count();
 }
void string::count()
{   int c=0;
  int l=strlen(str);
  for(int i=0;i<l;i++)
    {
     if(str[i]==ch)
      c++;
      }
  cout<<"\n the no of "<<ch<<"\tis "<<c;
  }


void main()
{
 clrscr();
 string st;
st.enter();

 getch();
 }

