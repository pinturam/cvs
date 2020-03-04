#include<iostream.h>
#include<conio.h>

void factors_iter(int n)
{
for(int i=1;i<=n;i++)
{
if(n%i==0)
cout<<i<<" ";
}
}

void factors_rec(int n,int i)
{
if(i>n)
return;
if(n%i==0)
cout<<i<<" ";
factors_rec(n,i+1);
cout<<endl;
}

void main()
{
clrscr();
int n,i=1,ch;
do
{

cout<<"enter the value of n"<<endl;
cin>>n;
cout<<"which program do you want to perform?"<<endl;
cout<<" 1. factors of a number using iteration"<<endl;
cout<<" 2. factors of a number using recursion"<<endl;
cout<<" 3. exit"<<endl;
cout<<"enter your choice"<<endl;
cin>>ch;
switch(ch)
{
case 1: factors_iter(n);
break;
case 2: factors_rec(n,i);
break;

case 3:
return;
default:
cout<<"error"<<endl;
break;
}
}
while(1);
getch();
}
