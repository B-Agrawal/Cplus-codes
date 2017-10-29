#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int x[3][5]={ {18,20,13,24,35},
	       {7,8,6,19,10},
	       {19,22,31,21,15} };
int *n= &x[0][0];
cout<<"1.\t"<<(*(n+3)+1)<<endl;
cout<<"2.\t"<<*(n+2)<<endl;
cout<<"3.\t"<<*(*x+2)+5<<endl;
cout<<"4\t"<<++*n<<endl;
cout<<"5\t"<<*(*(x)+2)+1<<endl;
cout<<"6.\t"<<*n<<endl;
cout<<"7.\t"<<*(*(x+2)+1)<<endl;
cout<<"8.\t"<<*(*(x+1)+3)<<endl;
cout<<"9.\t"<<*(*(x+1))<<endl;
cout<<"10.\t"<<*(n+5)+1<<endl;
getch();
}