
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int m[10][10],j,k,t[10][10],i,ver,n,l;
cout<<" Enter the no. of vertex";
cin>>ver;
cout<<"enter a matrix";
for(i=0;i<ver;i++)
{
for(j=0;j<ver;j++)
{
cin>>m[i][j];
}
}
for(i=0;i<ver;i++)
{
for(j=0;j<ver;j++)
{
if(m[i][j]==0)
m[i][j]=2;
else
m[i][j]=0;
cout<<m[i][j];
}
}
cout<< " Enter the path length";
cin>>n;
cout<<"Enter the source and destination vertex";
cin>>l>>k;
for(i=1;i<=ver;i++)
{
for(j=1;j<=ver;j++)
{
t[i][j]=n*m[i][j];
if(i==l&&j==k)
{
  cout<<"The no. of paths are:"<<t[l][k];
  }
}
}


getch();
}