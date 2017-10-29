#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void dia(int a[][10],int n,int m)
{ int i,j;
cout<<"\n mid col\t";
 for(i=0;i<n;i++)
   { for(j=0;j<m;j++)
    {
       if(j==(m-1)/2)
	  cout<<a[i][j]<<' ';
       }
     }
   cout<<"\n mid row\t";
 for(i=0;i<n;i++)
   { for(j=0;j<m;j++)
    {
       if(i==(m-1)/2)
	  cout<<a[i][j]<<' ';
       }
     }
}
void main()
{ clrscr();
 int a[10][10],i,j,m,n;
   cout<<"\n the size";
    cin>>m>>n;
    cout<<"\n mat \n";
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
      { cin>>a[i][j];
      }
      }

    dia(a,m,n);

  getch();
  }

