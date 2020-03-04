#include<iostream>
using namespace std;
int main()
{

int n,count=0;
cout<<"enter the no of vertices (max 10)"<<endl;
cin>>n;
while(n>=10)
{
cout<<"enter a no less than 10"<<endl;
cin>>n;
}
cout<<"enter the matrix :"<<endl;
int matrix[10][10];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cin>>matrix[i][j];
}
int deg[10]={0};
for(i=0;i<n;i++)
{
for(int j=0;j<n;j++)
if(matrix[i][j]==1)
deg[i]++;
cout<<"degree of vertex "<<(i+1)<<" "<<deg[i]<<endl;
}

for(i=0;i<n;i++)
{
if(deg[i]%2==1)
{
count++;
}
}

cout<<endl;
if(count==0||count==2)
{
if(count==0)
cout<<"it contains Eulerian Path and Circuit";
else
cout<<"it contains Eulerian Path"<<endl;
}
else
cout<<"it does not contain Eulerian path"<<endl;
return 0;
}
