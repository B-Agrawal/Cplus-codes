#include<iostream.h>
#include<conio.h>
void merge(int a[],int b[],int c[],int x,int y)
{
  int i=0,j,k;
  for(k=0;k<x;k++)
   {
     if(a[k]%2!=0)
      { c[i]=a[k];
	i++;
	}
     }
   for(k=0;k<y;k++)
   {
     if(b[k]%2!=0)
      { c[i]=b[k];
	i++;
	}
   }
    for(k=y-1;k>=0;k--)
   {
     if(b[k]%2==0)
      { c[i]=b[k];
	i++;
	}
      }
   for(k=x-1;k>=0;k--)
   {
     if(a[k]%2==0)
      { c[i]=a[k];
	i++;
	}
    }
}
void main()
{
 clrscr();
 int x[10],y[10],z[20],a,b;
 cin>>a>>b;
  cout<<"\n araray A\n";

 for(int i=0;i<a;i++)
  cin>>x[i];
 cout<<"\n array B\n ";
   for(int j=0;j<b;j++)
      cin>>y[j];
  merge(x,y,z,a,b);
  for(int k=0;k<a+b;k++)
   cout<<z[k]<<' ';
   getch();
}
