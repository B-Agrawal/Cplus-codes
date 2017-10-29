#include<iostream.h>
#include<conio.h>

void codind(char c[],int ch,int nj)
{for(int i=0;c[i]!='\0';i++)
{ if(c[i]>='A'&&c[i]<='z')
      if(1!=0)
      {if(c[i-1]=='*')
	 c[i-1]=ch;}
   else
      c[i]=nj;
  if(c[i]>='A'&&c[i]<='z')
      if(1==0)
      {if(c[i-1]=='*')
	 c[i-1]=ch;}
   else
      c[i]=ch;
      }
  }
 void main()
 {clrscr();
    char n[]="exam*2011*march";
    codind(n,'@','#');
cout<<n<<endl;  getch();}