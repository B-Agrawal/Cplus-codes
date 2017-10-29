#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>
#include<stdio.h>
void main()
{clrscr();
char fn[50];
char str[25],ch='y';
cout<<"\nenter thn ename of the file";
gets(fn);
ofstream o1(fn);

while((ch=='y')||(ch=='Y'))
{
cout<<"\n enter th line";
gets(str);
cout<<"choice";
cin>>ch;
}
o1.close();
ofstream tmp("tmp.dat");
ifstream i1(fn);
while(i1)
{  i1.get(ch);
if(ch!='\n')
ch=toupper(ch);
  tmp.put(ch);
  }
i1.close();
tmp.close();
ifstream i2("tmp.dat");
while(!i2.eof())
{cout<<str<<'\n';
 count++;
 if((count%22)==0)
 { cout<<"\n anyt key";
  cin>>ch;
  }
}
i2.close();
getch();
}

