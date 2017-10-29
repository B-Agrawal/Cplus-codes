#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

int divide(int a,int b)
{if(b==0)
 return -1;
 else if(a%b==0)
   return 1;
 else return 0;
 }
int divide(int a)
{int j=a/2; int i,flag=1;
for(i=0;i<=j;i++)
 { if(a%i==0)
     flag=-1;
   else flag=1;
     }
    return flag;
     }
 void main()
 {clrscr();int ch,a,b;
 cout<<"\n 1.divisiblity test\n2.prime no. test\n3.exit\n ";
 cin>>ch;
 switch(ch)
 {case 1:cout<<"enter two no : ";
	 cin>>a>>b;
	 divide(a,b);
	 break;
  case 2:cout<<"\n enter a no: ";
	 cin>>a;
	  divide(a);
	  break;
  case 3: exit(0);
  default: cout<<"\n wrong information";
   }
   getch();
   }
