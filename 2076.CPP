#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,a;
 cout<<"Enter the limit=";
 cin>>a;
 for(i=0;i<=a;i++)
{
 for(j=0;j<=i;j++)
{
 cout<<"*";
}
 cout<<endl;
}
 getch();
}