#include<iostream.h>
#include<conio.h>
/*void swap2best(int arr[],int s)
{ int i,t;
 for(i=0;i<s;i++)
  { if(arr[i]%10==0)
     {t=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=t;
     i++;
     }
  }
} */
void main()
{clrscr();
  int m[10][10],i,j,s,d,a[100],k=0;
  cin>>s>>d;
  cout<<"\nenter 2 D array\n";
  for(i=0;i<s;i++)
  {  for( j=0;j<d;j++)
       cin>>m[i][j];  }
 // swap2best(m,s);
  cout<<"\n1 D array\n";
   for(i=0;i<s;i++)
    { for(j=0;j<d;j++)
	  { a[k]=m[i][j];
	  k++; }
	     }
  for(i=0;i<s*d;i++)
    cout<<a[i]<<' ';
     getch();
  }
