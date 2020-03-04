

#include<iostream.h>
#include<conio.h>

int fib_rec(int n)
{
if((n==1)||(n==2))
return 1;
else
return fib_rec(n-1)+fib_rec(n-2);
}

int fib_iter(int n)
{
int a=0,b=1,c=0;
for(int i=0;i<n;i++)
{
cout<<a<<" ";
c=a+b;
a=b;
b=c;
}
return b;
}

void main()
{
clrscr();
int n,ch;
do
{
cout<<"enter the value of n"<<endl;
cin>>n;
cout<<"which program do you want to perform?"<<endl;
cout<<" 1. fibonnaci using recursion"<<endl;
cout<<" 2. fibonnaci using iteration"<<endl;
cout<<" 3. exit"<<endl;
cout<<"enter your choice"<<endl;
cin>>ch;

switch (ch)
{
case 1: int a;
a=fib_rec(n);
cout<<"fibonnaci using recursion = "<< a<<endl;
break;

case 2: int b;
b=fib_iter(n);
cout<<"fibonnaci using iteration = "<< b<<endl;
break;

case 3: return;

default: cout<<"error"<<endl;
break;
}
} while(1);
getch();
}
