#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class student
{
char name[30],str[20];
int rno;
float per;
float m1,m2,m3,m4,m5;
public:
void getdata();
void putdata();
void choose();
}ss;
void student::choose()
{  per=(m1+m2+m3+m4+m5)/5;
 if(per>=96)strcpy(str,"computer science");
 else
 if(per>=91&&per<=95)strcpy(str,"electronics");
 else
if(per>=86&&per<=90) strcpy(str,"mechanical");
 else
 if(per>=81&&per<=85)strcpy(str,"electrical");
 else
 if(per>=76&&per<=80) strcpy(str,"chemical");
 else
 if(per>=71&&per<=75) strcpy(str,"civil");

 }

void student::getdata()
{cout<<"\nentr name";
 gets(name);
 cout<<"\n entr roll no";
 cin>>rno;
 cout<<"\nentr marks in 5 subjects";
 cin>>m1>>m2>>m3>>m4>>m5;

 choose();
 }
void student::putdata()
{cout<<"\n name\t"<<name;
 cout<<"\n rno\t"<<rno;
 cout<<"\n per\t"<<per;
 cout<<"\n stream\t"<<str;
 }
void main()
{
 clrscr();
 ss.getdata();
 ss.putdata();
 getch();
 }
