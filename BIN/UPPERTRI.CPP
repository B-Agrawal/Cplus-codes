#include<iostream.h>
#include<conio.h>
void upper(int a[10][10],int m,int n)
{ int i,j;
cout<<endl<<endl;
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
     {
      if(i==j||i>j)
       cout<<a[i][j];
       else cout<<' ';
	} cout<<endl;
  }
}
 void main()
 {clrscr();
  int i,j,m,n,a[10][10];
  cin>>m>>n;
  cout<<"\nenter matrix\n";
  for(i=0;i<m;i++)
   { for(j=0;j<n;j++)
      cin>>a[i][j];
     }
   upper(a,m,n);

	getch();
  }
