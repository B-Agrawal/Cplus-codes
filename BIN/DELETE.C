#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,num,k,pos,a[10];
clrscr();

scanf("%d",&n);
printf("\n ntr array");
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);}
 printf("\n nter element to delete");
 scanf("%d",&num);
       for(i=0;i<n;i++)
	 {
	  if(a[i]==num)
	  {
	     pos=i;
	     for(k=pos;k<n;k++)
	     {
	       a[k]=a[k+1];
	       }
	     n--;
	    }
	  }



  printf("\n array after deletion\n");
  for(i=0;i<n;i++)
     printf("\n%d",a[i]);

     getch();
     }

