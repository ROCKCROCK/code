#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number->";
    cin>>a;
    try
    {
        throw(a);
    }
    catch(int b)
    {
        if(b==0)
        {
            cout<<"zero exception";
        }
        else if(b<0)
        {
            cout<<"negative exception";
        }
        else
        {
            cout<<"positive exception";
        }
    }
    return 0;
}