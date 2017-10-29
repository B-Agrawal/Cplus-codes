#include<iostream.h>
#include<conio.h>
void is_sort(int a[],int m)
{ int i,f=0;
  if(a[0]<a[1])
   {
     for( i=0;i<m;i++)
      {
	if(a[i]<a[i+1])
	  f=1;
	}  cout<<"\n acs";

    }
    else
     { if(a[0]>a[1])
       {
	 for(i=0;i<m;i++)
	  {
	    if(a[i]>a[i+1])
	     f=2;
	     }
	    cout<<"\n desc";
	     }

       else
	   cout<<"\n not sorted";

	    }
 /* int i,j,f=0;
   for(i=0,j=i+1;i<m-1;i++,j++)
    {
      if(a[i]>a[j])
	  f=2;
	  else
	     if(a[i]<a[j])
	       f=1;
	       else
		  f=0;
		  }    */
      if(f==1)
       cout<<"\n array is sorted in asc";
	 else
	   if(f==2)
	   cout<<"\n array is desc";
	   else cout<<"\n not sorted";
  }

void main()
{
 clrscr();
 int x[10],m;
 cin>>m;
 for(int i=0;i<m;i++)
 cin>>x[i];
 is_sort(x,m);
 getch();

}
