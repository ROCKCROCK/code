#include<iostream>
using namespace std;
int a=1;
int main()
{   cout<<"Global Call->"<<a<<endl;
    int a=3;
    if(2>1)
    {
       int a=2;
        cout<<"Scope Call->"<<a<<endl;
    }
    cout<<"Local Call->"<<a<<endl;
}