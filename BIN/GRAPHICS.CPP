

#include<conio.h>
#include<graphics.h>
void main()
{clrscr();
int driver=DETECT, mode;
initgraph(&driver,CGAC0," ");
setlinestyle(SOLID_LINE,23,03);
rectangle(450,350,150,150);
circle(100,250,50);
circle(500,250,50);
line(300,200,350,300);
line(350,300,250,300);
getch();
}

