#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
union REGS i,o;

struct pt
{
 int x,y;
};
struct point
{
 float x,y;
};
float xl,xb,xr,xt,m,slope[20];
int bc=0,xc,yc,n=0,k;
int dx,dy,x,y,temp,a[20][2],xi[20];

enum bound
{
 left,
 right,
 bottom,
 top
};
int inside(struct point p,enum bound b)
{
 int c=1;
 switch(b)
 {
 case left: if(p.x<x1)
	       c=0;
	       break;
 case right: if(
 }

int initmouse()
{
 i.x.ax=0;
 int86(0X33,&i,&o);
 return(o.x.ax);
}

void showmouseptr()
{
 i.x.ax=1;
 int86(0X33,&i,&o);
}
void hidemouseptr()
{
 i.x.ax=2;
 int86(0X33,&i,&o);
}
void getmousepos(int *button,int *x,int *y)
{
 i.x.ax=3;
 int86(0X33,&i,&o);
 *button=o.x.bx;
 *y=o.x.cx;
 *y=o.x.dx;
}
void main()
{
 enum bound b;
 int cou,i,flags;
 struct point p[30],pout[30],z;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 initmouse();
 getch();
}
