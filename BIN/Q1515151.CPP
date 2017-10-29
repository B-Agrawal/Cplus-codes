#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,j,k,M[10][10];
for(i=0;i<4;i++)
{ for(j=0;j<4;j++)
   cin>>M[i][j];   }
cout<<"\n\n\n\n";
for(i=0;i<4;i++)
  {for(j=0;j<4;j++)
    { cout<<M[i][j]<<i<<j<<"\t";
     }cout<<endl;
     }
   getch();
}
