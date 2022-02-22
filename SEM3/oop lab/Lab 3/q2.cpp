#include<iostream>
using namespace std;
void si(int p,int r,int t)
{
    int a;
    a=p*r*t;
    cout<<"simple intrest is-- "<< a<<endl;
}
int main()
{
    int p,r,t;
    cout<<"enter p--";
    cin>>p;
    cout<<"enter r--";
    cin>>r;
    cout<<"enter t--";
    cin>>t;
    si(p,r,t);
    return 0;
}