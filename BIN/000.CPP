#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<ctype.h>

void main()
{clrscr();
char ch;
int i=0,n=0,c=0; char arr[50];
ifstream i1("story.txt",ios::in);
if(!i1)
{cout<<"|n file not exit";
exit(0);
}
else{
 while(!i1.eof())
 {   i1.get(ch);
     arr[i]=ch;
     i++;
     if(ch==' ')
     {i--;
     c=c+i;
     i=0;
    n++;
     }
  }
  }
 cout<<"\n no of words"<<n;
 i1.close();
 getch();
 }