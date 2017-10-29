#include<iostream.h>
#include<conio.h>
void row_swap(int a[][10],int m,int n)
{ int i,j,tmp;
 for(i=0;i<n;i++)
 {  for(j=0;j<m;j++)
     { tmp=a[0][j];
       a[0][j]=a[n-1][j];
       a[n-1][j]=tmp;
       }
       //cout<<endl;
  }
}
void main()
{
  clrscr();
  int i,j,m,n,a[10][10];
  cin>>m>>n;
  for(i=0;i<n;i++)
   { for(j=0;j<m;j++)
       cin>>a[i][j];
       }
  row_swap(a,n,m);
   for(i=0;i<n;i++)
   { for(j=0;j<m;j++)
      { cout<<a[i][j];
       }cout<<endl;
       }
   getch();
   }



