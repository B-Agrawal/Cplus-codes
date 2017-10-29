#include<stdio.h>
#include<conio.h>
void main()
{int ft,st,tmp,i=1,n;
clrscr();
ft=0;st=1;
scanf("%d",&n);
printf("%d  %d",ft,st);
   while(i<=n)
   {
	tmp=ft+st;
	ft=st;
	st=tmp;
	printf(" %d",tmp);
	i++;
   }
getch();
}
