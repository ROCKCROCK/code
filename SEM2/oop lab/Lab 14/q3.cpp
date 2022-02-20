#include<iostream>
using namespace std;
void in()
{
    int a;
    cout<<"enter the number->";
    cin>>a;
    throw(a);
}
int main()
{
    try
    {
        in();
    }
    catch(int b)
    {
        if(b==0)
        {
            cout<<"zero entered";
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

