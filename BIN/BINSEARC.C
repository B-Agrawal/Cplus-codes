#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[10],p,s,r;
  int mid,beg,last;
 printf("\nenter size");
 scanf("%d",&s);
  for(i=0;i<s;i++)
     scanf("%d",&a[i]);
  printf("\nnetre no to be searched");
   scanf("%d",&p);
   beg=0,last=s-1;
while(beg<=last)
 {
  mid=(beg+last)/2;
    if(a[mid]==p)
     { r=mid; break; }
     else
	 { if(a[mid]<p)
	    beg=mid+1;
	     else
	    last=mid-1;  }
   }




printf("\n element\t%d\tfound at\t%d ",p,r+1);
getch();
}