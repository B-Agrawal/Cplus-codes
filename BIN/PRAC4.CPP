#include<iostream.h>
#include<conio.h>
void reverse(int a[][10],int s,int p)
{ int temp;
  int i,j;
  int rs=0,cs=0;
 for( i=0;i<s;i++)
  {  rs=0;
     cs=0;
   for( j=0;j<p;j++)
   { rs+=a[i][j];
    cs+=a[j][i];
     }
  cout<<"\n sum of row"<<i+1<<'\t'<<rs;
  cout<<"\n sum  of col"<<i+1<<'\t'<<cs;
  }
}

void main()
{
 clrscr();
 int x[10][10],s,p;
 cin>>s>>p;
 for(int i=0;i<s;i++)
  for(int j=0;j<p;j++)
     cin>>x[i][j];
 reverse(x,s,p);
 getch();


}
