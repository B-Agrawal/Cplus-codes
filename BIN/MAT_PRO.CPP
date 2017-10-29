#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr(); int i,j;
 int x[10][10],y[10][10],z[10][10],m,n,p,q;
 cout<<"\n enter size of matrix x[][]\t";
 cin>>m>>n;
 cout<<"\n entr matrix x[][]";
 for(i=0;i<m;i++)
 { for(j=0;j<n;j++)
    cin>>x[i][j];
    }
 cout<<"\n ntr size of mat y ";
 cin>>p>>q;
 cout<<"\n enter mat y";
  for(i=0;i<p;i++)
  { for(j=0;j<q;j++)
     cin>>y[i][j];}

     //mat pro
    int k;
 for(i=0;i<m;i++)
   for(j=0;j<q;j++)
    { z[i][j]=0;
       for(k=0;k<n;k++)
    z[i][j]+=(x[i][k]*y[k][j]);
    }

  cout<<"\n mat pro";
  for(i=0;i<m;i++)
   {
    for(j=0;j<q;j++)
   { cout<<z[i][j];
    }cout<<endl;}
  getch();
  }





