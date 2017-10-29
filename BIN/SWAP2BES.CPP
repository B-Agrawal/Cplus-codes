#include<iostream.h>
#include<conio.h>
void swap2best(int arr[],int s)
{ int i,t;
 for(i=0;i<s;i++)
  { if(arr[i]%10==0)
     {t=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=t;
     i++;
     }
  }
}
void main()
{clrscr();
  int m[20],i,s;
  cin>>s;
  cout<<"\nenter array\n";
  for(i=0;i<s;i++)
   cin>>m[i];
  swap2best(m,s);
  cout<<"\nswaped array\n";
   for(i=0;i<s;i++)
     cout<<m[i]<<' ';
  getch();
  }
