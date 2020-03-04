#include<iostream.h>
#include<conio.h>

template<class tempp>

void insertion(tempp a[],int n)

{
tempp temp;
for(int k=1;k<=n-1;k++)
{
temp=a[k];
int j=k-1;
while((temp<a[j])&&(j>=0))
{
a[j+1]=a[j];
j=j-1;

}
a[j+1]=temp;
}
}
void main()
{   clrscr();
int a[20],n;
cout<<"enter no of elements";
cin>>n;
cout<<"enter elements";
for(int i=0;i<n;i++)
cin>>a[i];
insertion(a,n);
cout<<"\n sorted order elements  ";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}

getch();
}
