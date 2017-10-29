#include<iostream.h>
#include<conio.h>
#include<string.h>
void strfunc(char *str)
{
  int l,i,j,len=strlen(str);
  for(i=0;i<len;i++)
    {
      for(j=0;j<=i;j++)
	cout<<str[j];
	cout<<endl;
    }
  }
void main()
{
 clrscr();
  strfunc("California");
  getch();

}
