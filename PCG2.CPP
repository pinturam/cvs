#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void circle(int x0,int y0,int r);

void main()
{
clrscr();

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"			Circle			       \n";
cout<<"Enter Center Point:";
cin>>x>>y;
cout<<"Enter radius:";
cin>>r;
circle(x,y,r);
getch();
closegraph();
}
void circle(int x0,int y0, int r)
{
int x=r;
int y=0;
int err=0;
while(x>=y)
{
	putpixel(x0+x,y0+y,7);
	putpixel(x0+y,y0+x,7);
	putpixel(x0-y,y0+x,7);
	putpixel(x0-x,y0+y,7);
	putpixel(x0-x,y0-y,7);
	putpixel(x0-y,y0-x,7);
	putpixel(x0+y,y0-x,7);
	putpixel(x0+x,y0-y,7);

	if(err<=0)
	{
	y+=1;
	err+=2*y+1;
	}
	if(err>0)
	{
	x-=1;
	err-=2*x+1;
	}
}
}