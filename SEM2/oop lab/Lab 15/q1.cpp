#include<iostream>
using namespace std;

template <class T>

void Swap(T &x, T &y) 
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main() 
{
    int x, y;
    cout << "Enter 1st number->";
    cin >> x;
    cout << "Enter 2nd number->";
    cin >> y;
    cout<<endl;
    cout << "Before Swap->"<<endl;
    cout << "\nx value is->" << x;
    cout << "\ny value is->" << y;
    Swap(x, y);
    cout << "\n\nAfter Function Templates->\n";
    cout << "\nx value is->" << x;
    cout << "\ny value is->" << y;
    return 0;
}
