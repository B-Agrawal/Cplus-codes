#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class string
{
 char str[25];
 char s;
 int c;
 public:
 void getdata();
 void count();
 void putdata();
 };
void string::getdata()
 {cout<<"\n enter the string ";
   gets(str);
  cout<<"\n entr th e char";
  cin>>s;   count();
  }
 void string::count()
 { c=0;
 for(int i=0;str[i]!='\0';i++)
     { if(str[i]==s)
	 c++;

	 }
  }
   void string::putdata()
   {
  cout<<"|n\n string is:"<<str;
  cout<<"\n no of character     "<<s<<"  is   :"<<c;
  }


void main()
{clrscr();
string ss;
ss.getdata();
ss.putdata();
getch();
}

