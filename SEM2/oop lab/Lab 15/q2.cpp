#include<iostream>
using namespace std;

template <class T>

void add(T &x, T &y) 
{
    cout<<endl;
    cout<<"after addition->"<<x+y;
}
int main() 
{
    int x, y;
    cout << "Enter 1st number->";
    cin >> x;
    cout << "Enter 2nd number->";
    cin >> y;
    add(x, y);
    return 0;
}