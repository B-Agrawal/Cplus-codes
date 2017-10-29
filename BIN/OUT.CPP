#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void strcon(char s[])
{
  for(int i=0,l=0;s[i]!='\0';i++,l++);
   for(int j=0;j<l;j++)
   {
	 if(isupper(s[j]))
	  s[j]=tolower(s[j])+2;
	  else if(islower(s[j]))
	   s[j]=toupper(s[j])-2;
	   else
	      s[j]='@';
   }
}
void main()
{clrscr();
 char *c="Romeo Juliet";
 strcon(c);
 cout<<"Text = "<<c<<endl;
 c=c+3;
 cout<<"New Text = "<<c<<endl;
 c=c+5-2;
 cout<<"Last Text = "<<c<<endl;
 getch();
 }
