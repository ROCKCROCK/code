#include<iostream>
using namespace std;
int main()
{
int a,i,sum=0,b;
cout<<"enter no.-"<<endl;
cin>>a;
for(i=a;i!=0;i=i/10)
{
 b=i%10;
 sum=sum+(b*b*b);
}
if(sum==a)
{
    cout<<"it is a armstrong number"<<endl;
}
else
{
    cout<<"it is a not armstrong number"<<endl;
}
return 0;
}