#include<iostream.h>
#include<conio.h>
struct stud
{int roll;
int per;
}s[5];
void main()
{clrscr();
int i,j,p=0,temp,c[5];

for(i=0;i<5;i++)
{
cout<<"enter roll:";
cin>>s[i].roll;
cout<<"enter per:";
cin>>s[i].per;
}
for(i=0;i<5;i++)
{if(s[i].per>=90)

{c[p]=s[i].per;
p++;
}
}
for(i=0;i<p;i++)
{cout<<c[p];
}

/*for(i=0;i<p;i++)
{for(j=0;j<p-1-i;j++)
{if(c[j+1]>c[j])
{temp=c[j];
c[j]=c[j+1];
c[j+1]=temp;
}
}
}
for(i=0;i<p;i++)
{cout<<"   "<<s[i].per<<endl;
} */
getch();
}