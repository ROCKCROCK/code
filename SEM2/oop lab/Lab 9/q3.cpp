#include <iostream>
using namespace std;
int a;
int b;
int& RetbyRefa();
int& RetbyRefb();
int main()
{

    cout << "Enter the first number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
    if (a > b)
    {
        RetbyRefa() = -1;
    }
    else
    {
        RetbyRefb()=-1;
    }
    cout<<a<<endl;
    cout<<b<<endl;
}
int& RetbyRefa()
{
    return a;
}
int& RetbyRefb()
{
    return b;
}