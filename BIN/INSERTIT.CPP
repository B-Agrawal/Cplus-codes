#include<iostream.h>
#include<conio.h>
#include<stdio.h>
/* int isEmpty(int a[],int n)
 { for(int i=0;i<n;i++)
   if(a[i]==NULL)  return 1;
   else return 0;
   } */
void insat(int a[],int n,int p)
{  int i,f=0;;
 /* for(i=0;i<n;i++)
   { if(a[i]==NULL)
      { a[i]=p; f=1;cout<<a[i]<<' ';
	break;
      }
   } */
	if(f==0)
      { a[n]=p;
	   n++;
      }cout<<endl<<endl;
     for(i=0;i<n;i++)
      { cout<<a[i]<<'\n';}
 }
void main()
{clrscr();
 int a[20];  int n; char ch;
 cout<<"\nenter size  :  ";
 cin>>n;
// cout<<"\nenter size \n";
  int i=0;
    // for(i=0;i<n;i++)
      //{ cin>>a[i];}
   cout<<"\n would you like to enter :(y/n)";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {cin>>a[i];
    i++;
    cout<<"\n would you like to enter :(y/n)";
    cin>>ch;
    } int j=i;
 int p;
  cout<<"\n enter item to be inserted for : ";
   cin>>p;
   //isEmpty(a,n);
  insat(a,j,p);

  getch();
  }

