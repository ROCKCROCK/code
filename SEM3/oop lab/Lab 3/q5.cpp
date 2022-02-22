#include<iostream>
using namespace std;
int main()
{
    int i,j,s=0;
    cout<<"enter the 1st numbers"<<endl;
    cin>>i;
    cout<<"enter the 2nd numbers"<<endl;
    cin>>j;
    int &a=i;
    int &b=j;
    s=a+b;
    cout<<"the sum is ="<<s;
}
