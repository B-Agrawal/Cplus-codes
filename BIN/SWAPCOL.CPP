#include<iostream.h>
#include<conio.h>
void col_swap(int a[][10],int m,int n)
{ int i,j,tmp;
 for(i=0;i<n;i++)
 {  for(j=0;j<m;j++)
     { tmp=a[i][0];
       a[i][0]=a[i][m-1];
       a[i][m-1]=tmp;
       }
       //cout<<endl;
  }
   for(i=0;i<n;i++)
 {  for(j=0;j<m;j++)
     { tmp=a[i][1];
       a[i][1]=a[i][m-2];
       a[i][m-2]=tmp;
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
  col_swap(a,n,m);
   for(i=0;i<n;i++)
   { for(j=0;j<m;j++)
      { cout<<a[i][j];
       }cout<<endl;
       }
   getch();
   }



