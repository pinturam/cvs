#include<iostream.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #include<iostream.h<>
#include<conio.h>
void main()
{
clrscr();
long no, rev=0;
cout<<"Enter a no."<<endl;
cin>>no;
while(no!=0)
{
int rem = no%10;
rev = rev*10+rem;
no=no/10;
}
cout<<"Reversed no. is "<<rev<<endl;
getch();
}