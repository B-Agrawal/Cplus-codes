#include<fstream.h>
#include<process.h>
#include<conio.h>
void main()
{clrscr();
  int m[3][3],i,j;
  for( i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {       //	if(i==1)
	 cin>>m[i][j];
	 }
      }
     cout<<"\n";
       for( i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
       {       	if(j==1)
	 cout<<m[i][j];
	 }
      }
   getch();
   }