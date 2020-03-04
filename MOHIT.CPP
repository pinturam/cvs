#include<iostream.h>
#include<conio.h>
void swap(int a, int b);
void main()
{clrscr();
int n,m;
cout<<"enter two numbers";
cin>>n>>m;
swap(n,m);
}
void swap(int a, int b)
{a=a+b;
b=a-b;
a=a-b;
cout<<"\n swaped values are "<<a<<" and "<<b;
getch();}