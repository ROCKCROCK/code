#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Call By Value"<<endl;

    cout << "After Swapping A ="<< a << endl;
    cout << "B = " << b << endl;
}

void swapByReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
   cout << "Call By Reference"<<endl;

    cout << "After Swapping A ="<< a << endl;
    cout << "B = " << b << endl;
}

void swapByAddress(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Call By Address"<<endl;
    cout << "After Swapping A ="<< *a << endl;
    cout << "B = " << *b << endl;
}

int main()
{
    int a, b,c,d;
    cout << "Enter Value of A::";
    cin >> a;
    cout << "Enter Value of B::";
    cin >> b;
     c=a;
     d=b;
    swapByValue(a, b);
    swapByReference(a, b);
    swapByAddress(&c, &d);
}
