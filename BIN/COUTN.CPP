#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>

void main()
{clrscr();
ifstream o1("story.txt",ios::out);
//ofstream h1("hello.txt",ios::out);
 char ch,arr[25];
 //int c=0;
 if(!o1)
 {cout<<"\n file not";
  exit(0);
  }
 else
  { int i=0;
  while(!o1.eof())
  {o1<<ch;
   cout<<arr;
  //  if(ch==' ')
    // ch='-';
   //  h1.put(ch); cout<<ch;
     }
   }
/*   char arr2[50];
  for(int i=strlen(arr),k=0;i>0,k<strlen(arr);i--,k++)
   {  arr2[k]=arr[i];
     o1.put(arr2);cout<<arr2;
     }  */
//  cout<<"\n no of uppercase"<<c<<'\n';   cout<<"\n size of classA "<<sizeof(a);
  o1.close();
  getch();
  }